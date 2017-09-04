#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	double a, b, c, d, e, f;

	while(cin >> a >> b >> c >> d >> e >> f){
		double x = c * e - b * f;
		double y = a * f - c * d;
		double z = a * e - b * d;

		cout << fixed << setprecision(3) << (x/z == -0.000? 0.000:x/z) << " " << (y/z == -0.000? 0.000:y/z) << endl;
	}

	return 0;
}
