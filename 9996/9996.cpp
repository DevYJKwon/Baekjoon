#include <iostream>
#include <regex>

using namespace std;

int main()
{
	int testCase;
	string pat;
	cin >> testCase;
	cin >> pat;
	
	string pre, suf;
	int pos = pat.find('*');
	pre = pat.substr(0, pos);
	suf = pat.substr(pos+1, pat.length()-pos);

	regex pattern(pre+"\[a-z]*"+suf);
	for (int i = 0; i < testCase; i++) {
		string temp;
		cin >> temp;
		if (regex_match(temp, pattern)) {
			cout << "DA\n";
		}
		else {
			cout << "NE\n";
		}
	}
}
