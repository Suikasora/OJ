#include <bits/stdc++.h>
using namespace std;
////////////////////////QWQ

const int N = 100;
const int INF = 1e7;
int map[N][N],dist[N],p[N],n,m;
bool flag[N];
void Dijkstra(int u){
	for(int i = 1;i <= n;i++){
		dist[i] = map[u][i];
		flag[i] = false;
		if( dist[i]==INF ){
			p[i]=-1;
		}
		else
			p[i]=u;
	}
	dist[u] = 0;
	flag[u] = true;
	for(int i = 1;i <= n;i++){
		int temp = INF , t = u;
		if( !flag[j] && dist[j]<temp ){
			t=j;
			temp = dist[j];
		}
	}
}
