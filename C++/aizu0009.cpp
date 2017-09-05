#include <bits/stdc++.h>
#define mx 11000003
using namespace std;

bool status[mx];
vector<int>prime;

void seive()
{
	int limit = sqrt(mx);

	status[0] = status[1] = 1;
	for(int i = 4; i <= mx; i += 2) status[i] = 1;

	prime.push_back(2);
	for(int i = 3; i <= mx; i += 2){
		if(!status[i]){
			prime.push_back(i);
			if(i <= limit)
				for(int j = i * i; j <= mx; j += i + i)
					status[j] = 1;
		}
	}
}

int main(void)
{
	seive();
	int n;

	while(cin >> n){
		cout << lower_bound(prime.begin(), prime.end(), n + 1) - prime.begin() << endl;
	}

	return 0;
}
