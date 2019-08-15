//
// Created by kirill on 09/07/19.
//

#ifndef PASSWORDGENERATOR_STRINGHASH_HPP
#define PASSWORDGENERATOR_STRINGHASH_HPP

#include <string>
#include <vector>

using namespace std;
using ll = long long;

#define pb push_back
#define all(c) c.begin(), c.end()
#define forEach(c) for (auto &it : c)

class StringHash {
	string siteName;
	string secretWord;
	ll hashNum;
	vector<char> symb;
	vector<char> special;
public:
	StringHash(const string &_siteName);
	const ll BASE = 3000000019LL;
	string password();
	ll hash();
	string hex_hash();

	char hash(ll value, ll idx);
};


#endif //PASSWORDGENERATOR_STRINGHASH_HPP
