#include <bits/stdc++.h>
using namespace std;

int Permutation(int n)
{
	int con = 0;
	
	for(int i = 0; i <= 9; i++)
		for(int j = 0; j <= 9; j++)
			for(int k = 0; k <= 9; k++)
				for(int l = 0; l <= 9; l++)
					if(i + j + k + l == n)
						con++;

	return con;
}

int main(void)
{
	int n;

	while(cin >> n){
		cout << Permutation(n) << endl;
	}

	return 0;
}
