#include <bits/stdc++.h>
using namespace std;
////////////////////////QWQ

struct Meet{
	int beg;
	int end;
	int num;
}meet[1000];
class  setMeet{
	public:
		void init();
		void solve();
	private:
		int n,ans;
};
void setMeet::init()
{
	int s,e;
	cout<<"The total number of meetings"<<endl;
	cin >> n;
	cout<<"time"<<endl;
	for(int i = 0;i < n;i++){
		cin>>s>>e;
		meet[i].beg=s;
		meet[i].end=e;
		meet[i].num=i+1;
	}
}

bool cmp(Meet x,Meet y){
	if( x.end == x.end ){
		return x.beg>y.beg;
	return x.end<y.end;
	} 
}
void setMeet::solve(){
	sort(meet,meet+n,cmp);
	cout<<"the rusult"<<endl;
	cout<<"num"<<"beg"<<"end"<<endl;
	for
}
