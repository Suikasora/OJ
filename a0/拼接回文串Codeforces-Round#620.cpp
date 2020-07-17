#include <bits/stdc++.h>
using namespace std;
////////////////////////
int main(void)
{
	int n,m;
	vector<string>test_first;
	vector<string>test_second;
	vector<string>output1;
	vector<string>output2;
	cin >> n >> m;
	int flag[100]={0};
	for(int i = 1;i <= n;i++){
		string temp;
		cin >> temp;
		test_first.push_back(temp);
		reverse(temp.begin(),temp.end());//能够转义一个字符串
		test_second.push_back(temp);
	}
	for(int i = 0;i < test_first.size();i++){
		for(int j = 0;j < test_first.size();j++){
			if( test_first[i] == test_second[j] && !flag[i] && !flag[j] && i!=j){//flag剪枝已用过元素,毕竟还要一个中间元素
				output1.push_back(test_first[i]);
				output2.insert(output2.begin(),test_first[j]);//在最前面插入新元素
				flag[i]=1;
				flag[j]=1;
			}
		}
	}
	string mid="";
	for(int i = 0;i < test_first.size();i++){
		if( !flag[i] ){
			string s = test_first[i];
			reverse(s.begin(),s.end());
			if( s == test_first[i] && test_first[i].length() >= mid.length() ){
				mid = test_first[i];
			}
		}
	}
	output1.push_back(mid);
	if( output1.size() == 0 && output2.size() ){
		cout<<0;
		return 0;
	}
	long long size = 0;
	for(int i = 0;i < output1.size();i++){
		size+=output1[i].length();
	}
	for(int i = 0;i < output2.size();i++){
		size+=output2[i].length();
	}
	cout << size << endl;
	for(int i = 0;i < output1.size();i++){
		cout << output1[i];
	}
	for(int i = 0;i < output2.size();i++){
		cout << output2[i];
	}
	return 0;
}
