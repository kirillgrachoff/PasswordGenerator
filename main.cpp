#include <iostream>
#include <string>

#include "StringHash.hpp"

using ll = long long;
using namespace std;

int main() {
	string s;
	cin >> s;
	StringHash stHsh(s);
	cout << "\n" << stHsh.password() << "\n" << stHsh.hex_hash() << "\n";
	return 0;
}