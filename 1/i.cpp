#include <bits/stdc++.h>
using namespace std;
////////////////////////QWQ
int main(void)
{
	int n,m,sum,a,b;
	int start[10009],end[10009];
	while( 1 ){
		cin >> n >> m;
		if( n+m <= 0 ){
			break;
		}
		for(int i = 0;i < n;i++){
			cin >> a >> b >> start[i] >> end[i];
			start[i] += end[i];
		}
		for(int i = 0;i < m;i++){
			sum=0;
			cin >> a >> b;
			b += a;
			for(int j = 0;j < n;j++){
				if( end[j] > a && start[j] < b ){
					sum++;
				}
			}
			cout << sum << endl;
		}
	}
	return 0;
}
