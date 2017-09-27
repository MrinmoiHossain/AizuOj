#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	string s;
	getline(cin, s);

	for(int i = 0; s[i]; i++){
		if(isalpha(s[i]))
			cout << (char)toupper(s[i]);
		else
			cout << s[i];
	}
	cout << endl;

	return 0;
}
