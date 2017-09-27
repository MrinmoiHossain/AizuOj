#include <bits/stdc++.h>
using namespace std;

bool isLeapYear(int n)
{
	if((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
		return true;
	else
		return false;
}

int main(void)
{
	int a, b;
	bool bl = false;

	while(cin >> a >> b){
		if(!a && !b)
			break;

		if(bl)
			cout << endl;
		bool flag = true;
		for(int i = a; i <= b; i++){
			if(isLeapYear(i)){
				cout << i << endl;
				flag = false;
			}
		}

		if(flag)
			cout << "NA" << endl;
		bl = true;
	}

	return 0;
}
