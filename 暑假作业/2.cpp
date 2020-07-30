#include <bits/stdc++.h>
using namespace std;
////////////////////////QWQ

//LCS问题的动态规划公共解法
int LCS(string text1,string text2){
	//二维
	//dp[i][j]表示text1从i开始，text2从j开始的最长公共子序列长度
	//最后一行一列为0,下面便于更新
	vector<vector<int>> dp(text1.size() + 1,vector<int>(text2.size()+1));
	for( int i = text1.size() - 1; i >= 0; i--){
		for(int j = text2.size() - 1; j >= 0 ; j--){
			if( text1.at(i) == text2.at(j) ){
				//若text1在i处和text2在j处不等，那么相对于之前位置的长度直接增1
				dp.at(i).at(j) = 1 + dp.at(i+1).at(j+1);
			}
			else{
				//若text1在i处和text2在j处不等，那么dp从它的下一个选择最大值更新
				dp.at(i).at(j) = max(dp.at(i+1).at(j), dp.at(i).at(j+1));
			}
		}
	}
	return dp[0][0];
}
int main(void)
{
	string text1,text2;
	cin >> text1 >> text2;
	cout << LCS(text1,text2) << endl;
	return 0;
}
