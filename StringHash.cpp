//
// Created by kirill on 09/07/19.
//

#include "StringHash.hpp"
#include <fstream>
#include <algorithm>

char pow(char a, ll p) {
	if (p == 0) return 1;
	char ans = pow(a, p / 2);
	if (p % 2 == 1) ans *= a;
	return ans;
}

StringHash::StringHash(const string &_siteName) {siteName = _siteName;
	ifstream fin("./password.txt");
	string spec;
	fin >> secretWord >> hashNum >> spec;
	fin.close();
	forEach(spec) special.pb(it);
	for (char c = 'a'; c <= 'z'; c++) symb.pb(c);
	for (char c = 'A'; c <= 'Z'; c++) symb.pb(c);
	//random_shuffle(all(symb));
}

string StringHash::password() {
	string ans = siteName;
	for (ll i = 0; i < ans.size(); i++) {
		ans[i] ^= secretWord[i % secretWord.size()];
	}
	for (ll i = 0; i < ans.size(); i++) {
		ans[i] = hash(ans[i], i);
	}
	forEach(ans) {
		if (!special.empty()) {
			if (it % 2 == 0) {
				it = symb[(it / 2) % symb.size()];
			} else {
				it = special[(it / 2) % special.size()];
			}
		} else {
			it = symb[it % symb.size()];
		}
	}
	return ans;
}

char StringHash::hash(ll value, ll idx) {
	return char((ll)value * (ll)pow(hashNum, idx));
}