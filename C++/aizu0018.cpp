#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	vector<int> v(5);
	for(int i = 0; i < 5; i++)
		cin >> v[i];

	sort(v.begin(), v.end(), greater<int>());

	for(int i = 0; i < 5; i++){
		cout << v[i];

		if(i < 4)
			cout << " ";
	}
	cout << endl;

	return 0;
}
