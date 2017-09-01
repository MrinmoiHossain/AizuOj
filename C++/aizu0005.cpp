#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

ll gcd(ll a, ll b)
{
	if(b == 0) return a;
	return gcd(b, a % b);
}

int main(void)
{
	ll a, b;
	
	while(cin >> a >> b){
		ll g = gcd(a, b);
		cout << g << " " << (a / g) * b << endl;
	}

	return 0;
}
