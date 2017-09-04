#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 1, a, b, c; i <= T; i++){
		cin >> a >> b >> c;

		if(a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}

	return 0;
}
