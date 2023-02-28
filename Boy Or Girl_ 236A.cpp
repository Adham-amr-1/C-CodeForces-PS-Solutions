#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
	string x;
	cin >> x;
	unordered_set<char> distinct_chars;
	for (char c : x) {
		distinct_chars.insert(c);
	}
	if (distinct_chars.size() % 2 == 0) {
		cout << "CHAT WITH HER!";
	}
	else {
		cout << "IGNORE HIM!";
	}
	return 0;
}
