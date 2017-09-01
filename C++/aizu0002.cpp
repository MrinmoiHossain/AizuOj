#include <bits/stdc++.h>
using namespace std;

int digit(int n)
{
	int con = 0;
	while(n){
		con++;
		n /= 10;
	}

	return con;
}

int main(void)
{
	int a, b;

	while(cin >> a >> b)
		cout << digit(a + b) << endl;

	return 0;
}
