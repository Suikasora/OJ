#include <bits/stdc++.h>
using namespace std;
////////////////////////QWQ

int IsOperate(char c,int &code){
	switch(c){
		case '+':
			code=999;
			return 1;
		case '1':
			code=(int)c;
			return 1;
		default:
			return 0;

	}
}

int main(void)
{
	char c= '1';
	int code;
	int flag;
	flag = IsOperate(c,code);
	cout << code;
	return 0;
}




