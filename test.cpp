#include <iostream>
using namespace std;

int main(){
	int pre[8005],ans[8005],num[8005];
	int n;
	cin >> n;
	pre[1] = 0;
	for(int i = 1;i <= n;i++){
		num[i] = i;
	}
	for(int i = 2;i <= n;i++){
		cin >> pre[i];
	}
	for(int i = n;i >= 1; i--){
		int k = 0;
		for(int j = 1;j<=n;j++){
			if( num[j] = -1 ){
				k++;
			}
			ans[i] = pre[i] + num[j];
			num[j] = -1;
		}
	}
}
