#include <bits/stdc++.h>
using namespace std;
////////////////////////QWQ

int main(void)
{
	int times=0;
	scanf("%d",&times);
	while(times--){
		long long a,b,n,S;
		cin>>a>>b>>n>>S;
		int flag=0;

		if(S<=a*n+b){
		if( a*n<=S && b>=S-a*n){
			flag = 1;
		}
		else{
			if( b>=S%n ){
				flag = 1;
			}
		}
		}
		if( flag ){
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
	return 0;
}
