#include <bits/stdc++.h>
using namespace std;
////////////////////////QWQ

const int MAX_N = 1e6;
int n,k,a[MAX_N];
bool dfs(int i ,int sum){
	//前面n项都计算过了，返回sum是否与k相等
	if( i == n ){
		return sum == k;
	}
	//不加上a[i]的情况
	if(dfs(i+1,sum)) return true;
	//加上a[i]的情况
	if( dfs(i+1,sum+a[i]) ) return true;
	//都不行
	return false;
}
int main(void)
{
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> a[i];
	}
	cin >> k;
	if( dfs(0,0) ){
		puts("Yes");
	}
	else{
		puts("No");
	}
	return 0;
}
