#include <bits/stdc++.h>
using namespace std;

struct Point{
	double x, y, r;
}A, B;

int main(void)
{
	int T;
	cin >> T;

	for(int i = 0; i < T; i++){
		cin >> A.x >> A.y >> A.r >> B.x >> B.y >> B.r;

		double dis = sqrt(pow(A.x - B.x, 2) + pow(A.y - B.y, 2));

		if(dis < A.r - B.r)
			cout << 2 << endl;
		else if(dis < B.r - A.r)
			cout << -2 << endl;
		else if(dis <= A.r + B.r)
			cout << 1 << endl;
		else if(dis > A.r + B.r)
			cout << 0 << endl;
	}

	return 0;
}
