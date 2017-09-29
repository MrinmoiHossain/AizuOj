#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	double a;
	vector<double> v;
	
	while(cin >> a)
		v.push_back(a);

	sort(v.begin(), v.end());

	printf("%lf\n", v[v.size() - 1] - v[0]);
}
