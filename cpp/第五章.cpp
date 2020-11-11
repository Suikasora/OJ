#include <bits/stdc++.h>
using namespace std;
////////////////////////
int main(void)
{
	int vim[10];
	for(int i = 0;i < 10;i++){
		vim[i]=i;
	}
	for(int x : vim){//输出而不改变
		x+=10;
		cout<<x<<endl;
	}
	for(int i = 0;i < 10;i++){
		cout<<vim[i]<<",";
		if(i==9)  printf("\n");
	}
	for(int &x : vim)//改变,符号&表明x是一个引用变量
		x+=100;
	for(int i = 0;i < 10;i++){
		cout<<vim[i]<<",";
		if(i==9)  printf("\n");
	}

	vector<int>vim1;
	for(int i = 0;i < 10;i++){
		vim1.push_back(i);
	}
	for(int x : vim1)//每个元素执行相同的操作
		cout<<x<<" ";
	cout<<endl;
	return 0;
}
