#include <bits/stdc++.h>
using namespace std;
////////////////////////
int main(void)
{
	string a,b,c;
	int times=0;
	scanf("%d",&times);
	while(times--){
		cin>>a>>b>>c;//getline(cin,a);
		int n = a.length(); // string �еĳ����� variable.length();
		int flag=1;
		for(int i = 0;i < n && flag;i++){
			if( a[i]!=b[i] ){ //string ��Ҳ���������ʽ��ʾcharλ��
				if( a[i] == c[i] ) continue;
				else if( b[i] == c[i] ) continue;
				else flag = 0;
			}
			else
			{
				if( a[i] != c[i] ) flag = 0;
			}
		}
		if(flag) cout << "YES" << endl;
		else cout << "NO" << endl;

	}
	return 0;
}
