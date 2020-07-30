#include <bits/stdc++.h>
using namespace std;
////////////////////////QWQ

const int money[] = {1,5,10,50,100,500};
int main(void)
{
	int A;
	int num[6];
	for(int i = 0;i < 6;i++){
		cin >> num[i];
	}
	cin >> A;

	int ans = 0;
	//本题至少存在一种解决方案
	for( int i = 5; i >= 0; i-- ){
		//使用的硬币数量
		int num_use;
		num_use = min(A/money[i],num[i]);
		//还需要填补的钱数
		A -= num_use * money[i];
		ans += num_use;
	}
	cout << ans << endl;
	return 0;
}
