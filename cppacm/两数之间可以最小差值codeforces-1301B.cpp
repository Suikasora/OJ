#include <bits/stdc++.h>
using namespace std;
////////////////////////
int main(void)
{
	int times=0;
	scanf("%d",&times);
	while(times--){
		int n=0;
		cin >> n;//数组中数字的个数
		int mx =0;
		int mi = 1e9;
		for(int i = 1;i <= n;i++){
			cin >> a[i];
		}
		a[0] = -1;
		a[n+1] = -1;
		for(int i = 1;i <= n;i++){
			if( a[i]==-1 ){
				if( a[i-1]!=-1 ){
					mx=max(mx,a[i-1]);
					mi=min(mi,a[i-1]);
				}
				if( a[i+1] != -1 ){
					mx=max(mx,a[i+1]);
					mi=max(mi,a[i+1]);
				}
			}
		}
		int cnt = (mx + mi) >> 1;// 两数和除以2，即和两个数相差结果最小的数
		int zuixiao = 0;
		for(int i = 1;i <= n;i++){
			if( a[i] == -1 ){
				a[i] = cnt;
			}
			if( i != 1 ){
				zuixiao = max(abs(a[i]-a[i-1]),zuixiao);
			}
		}
		cout << zuixiao << " " << cnt << endl;
	}
	return 0;
}
