#include <iostream>
using namespace std;
////////////////////////QWQ

const int MAX = 8005;
int main(void)
{
	int n,i,j,k;
	int pre[MAX],ans[MAX],num[MAX];
	cin >> n;
	pre[1] = 0;
	for(i = 1;i <= n;i++){
		num[i]=i;
	}
	for(i = 2;i<=n;i++){
		cin >> pre[i];
	}
	for(i = n;i >= 1; i--){
		k=0;
		for(j = 1;j <= n;j++){
			if( num[j] != -1 ){
				//是-1,k不变，再次循环
				//k意味着排序，不意味着值
				//最后比较的是排序，这样就不用考虑值的问题
				k++;
				if( k == pre[i]+1 ){
					ans[i] = num[j];
					num[j] = -1;
					break;
				}
			}
		}
	}
	for(i = 1;i <= n;i++){
		cout << ans[i] << endl;
	}
	return 0;
}
