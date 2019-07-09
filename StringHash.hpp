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
public:
	StringHash(const string &_siteName);

	string password();

	char hash(ll value, ll idx);
};


#endif //PASSWORDGENERATOR_STRINGHASH_HPP
