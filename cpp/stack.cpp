#include <bits/stdc++.h>
using namespace std;
int main(void){
	stack<int>s;
	for(int i=0;i<10;i++){
		s.push(i);
	}
	for(int i=0;i<s.size();i++){//��ӡΪ98765,ֻ��5��������Ϊ��ӡ5���Ժ�s.sizeֻʣ5��
		cout<<s.top();
		s.pop();
	}
	
	if(s.empty())
		cout<<"empty";
	return 0;
}
