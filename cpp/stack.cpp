#include <bits/stdc++.h>
using namespace std;
int main(void){
	stack<int>s;
	for(int i=0;i<10;i++){
		s.push(i);
	}
	for(int i=0;i<s.size();i++){//打印为98765,只有5个数，因为打印5次以后s.size只剩5了
		cout<<s.top();
		s.pop();
	}
	
	if(s.empty())
		cout<<"empty";
	return 0;
}
