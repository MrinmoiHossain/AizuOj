#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n;
	cin >> n;

	int amount = 100000;
	for(int i = 0; i < n; i++){
		amount *= 1.05;			//same as, amount = amount + amount * percentage
	
		if(amount % 1000 != 0)
			amount += (1000 - amount % 1000);
	}
	cout << amount << endl;
		
	return 0;
}
