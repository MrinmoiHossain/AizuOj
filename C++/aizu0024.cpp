#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	double v;

	while(cin >> v){
		double t = (v / 9.8);
		double y = (4.9 * t * t) / 5.0 + 1;

		int a = y;
		int dif = y - a;
		
		cout << a << endl;
		cout << (dif < 0? a : a + 1) << endl;
	}

	return 0;
}
