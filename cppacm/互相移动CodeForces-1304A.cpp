#include <bits/stdc++.h>
using namespace std;
////////////////////////
int main(void)
{
	int times=0;
	scanf("%d",&times);
	while(times--){
		int x,y,a,b;
		cin>>x>>y>>a>>b;
		if( (y-x) % (a+b) == 0 ){
			cout<< (y-x) / (a+b)<<endl;
		}
		else
			cout << -1 << endl;
	}
	return 0;
}
