#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	vector<int> v(10);
	for(int i = 0; i < 10; i++)
		cin >> v[i];

	sort(v.begin(), v.end());
	for(int j = 9; j > 6; j--)
		cout << v[j] << endl;

	return 0;
}
