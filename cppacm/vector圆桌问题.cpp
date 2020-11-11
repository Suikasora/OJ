#include <bits/stdc++.h>
using namespace std;
int main(void){
	vector<int>table;
	int n, m;
	while(cin>>n>>m){
		table.clear();
		for(int i=0;i<2*n;i++){
			table.push_back(i);
		}
		int pos=0;
		for(int i=0;i<n;i++){
			pos = (pos+m-1)%table.size();
			//pos已经受过转变，成为了以0开头的了，可以被用在以0开头的作用中
			table.erase(table.begin()+pos);
		}
		int j=0;
 /*   for(int i=0;i<table.size();i++){*/
			//cout<<table[i];
		/*}*/
		for(int i=0;i<2*n;i++){
			if(!(i%50)&&i)
				cout<<endl;
			if(j<table.size()&&i==table[j]){
				j++;
				cout<<"G";
			}
			else
				cout<<"B";
		}
		cout<<endl<<endl;
	}
	return 0;
}

