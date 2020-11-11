#include <bits/stdc++.h>
using namespace std;
/*int main(void){*/
	//int N=5,M=6;
	//vector<vector<int>>obj(N);
	//for(int i=0;i<obj.size();i++){
		//obj[i].resize(M);
	//}
	//for(int i=0;i<obj.size();i++){
		//for(int j=0;j<obj[i].size();j++){
			//cout<<obj[i][j]<<" ";
		//}
		//cout<<endl;
	//}
	//return 0;
/*}*/

int main(void){
	int N=5, M=6;
	vector<vector<int>>obj(N,vector<int>(M));

	for(int i=0;i<obj.size();i++){
		for(int j=0;j<obj[i].size();j++){
			cout<<obj[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
/*vector<vector<int>>obj(N,vector<int>(M));*/
