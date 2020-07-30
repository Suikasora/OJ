#include <bits/stdc++.h>
using namespace std;
////////////////////////QWQ

const int MAX_N = 1e6;
int L,n;
int x[MAX_N];
int main(void)
{
	cin >> L >> n ;
	for(int i = 0;i < n;i++){
		cin >> x[i];
	}
	//最短时间
	int minT = 0;
	for(int i = 0;i < n;i++){
		minT = max(minT, min(x[i],L-x[i]));
	}
	//最长时间
	int maxT=0;
	for(int i = 0;i < n;i++){
		maxT = max(maxT,max(x[i],L-x[i]));
	}
	cout << minT << endl;
	cout << maxT << endl;
	return 0;
}
