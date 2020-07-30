#include <bits/stdc++.h>
using namespace std;
////////////////////////QWQ
int n,W;
int w[105],v[105];
int dp[105][105];
int rec(int i, int j){
	if( dp[i][j] >= 0 ){//记忆化搜索
		return dp[i][j];
	}
	int res;
	if( i == n ){
		//没有剩余物品
		res = 0;
	} else if( j < w[i] ){
		//无法选择
		res = rec(i+1,j);
	} else{
		//选与不选
		res = max(rec(i+1,j),rec(i+1,j-w[i])+v[i]);
	}
	//记忆
	return dp[i][j] = res;
}
int main(void)
{
	cin >> n >> W;
	for(int i = 0;i < n;i++){
		cin >> w[i] >> v[i];
	}
	//初始化dp数组
	memset(dp,-1,sizeof(dp));
	cout << rec(0,W) << endl;
	return 0;
}
