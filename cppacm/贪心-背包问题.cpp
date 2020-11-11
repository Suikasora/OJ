#include <bits/stdc++.h>
using namespace std;
////////////////////////QWQ

const int M = 1e6+5;
struct three{
	double w;
	dolble v;
	double p;
}s[M];
bool cmp(three a, three b)
{
	return a.p>b.p;
}
int main(void)
{
	int n;
	double m;
	cout << "input"<<endl;
	cin >> n>>m;
	cout<<""<<endl;

	for(int i = 0;i < n;i++){
		cin>>s[i].w>>s[i].v;
		s[i].p=s[i].v/s[i].w;
	}
	sort(s,s+n,cmp);
	double sum = 0.0;
	for(int i = 0;i < n;i++){
		if( m>s[i].w ){
			w-=s[i].w;
			sum+=s[i].v;
		}
		else
		{
			sum +=m*s[i].p;
			break;
		}
	}
	cout<<"max"<<sum<<endl;

	return 0;
}
