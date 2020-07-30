#include <bits/stdc++.h>
using namespace std;
////////////////////////QWQ

const int MAX_N = 1e3;
vector<int> G[MAX_N];
int color[MAX_N];
int V;//顶点数

bool dfs(int v,int c){
	//v点立即染成颜色c
	color[v] = c;
	for(int i = 0;i < (int)G[v].size();i++){
		//相邻的顶点同色
		if( color[G[v][i]] == c ){
			return false;
		}
		//相邻的
		if( color[G[v][i]] == 0 && !dfs(G[v][i],-c) ){
			return false;
		}
	}
		return true;
}
int main(void)
{
	int E;
	cin >> V >> E;
	for(int i = 0;i < E;i++){
		int s,t;
		cin >> s >> t;
		G[s].push_back(t);
		G[t].push_back(s);
	}
	for(int i = 0;i < V;i++){
		if( color[i] == 0 ){
			if( !dfs(i, 1) ){
				puts("No");
				return 0;
			}
		}
	}
	puts("Yes");
	return 0;
}
