#include <bits/stdc++.h>
using namespace std;
////////////////////////
int main(void)
{
	int times=0;
	scanf("%d",&times);
	while(times--){
		long long a,b,c,n,t;
		cin>>a>>b>>c>>n;
		t=(a+b+c+n);
		bool flag = 1;
		if( t%3!=0 ){
			flag = 0;
		}
		if( (b+c+n-2*a)%3 != 0 || (a+b+n-2*c)%3 != 0 || (a+c+n-2*b)%3 != 0 ){
			flag = 0;
		}
		if( (b+c+n-2*a)<0 || (a+b+n-2*c)<0 || (a+c+n-2*b)<0 ){
			flag = 0;
		}
		if( flag ){
			cout<<"YES";
		}
		else
			cout<<"NO";
		if(times!=0) cout<<endl;
	}
	return 0;
}
