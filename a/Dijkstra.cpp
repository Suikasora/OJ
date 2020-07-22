#include <cstdio>
#include <iostream>
#include <cstring>
#include <stack>
using namespace std;

const int N = 100;
const int INF = 1e7;
int map[N][N],dist[N],p[N],n,m;
bool flag[N];//集合S

void Dijkstra(int u){
	for(int i = 1;i <= n;i++){
		dist[i] = map[u][i];
		flag[i] = false;
		if( dist[i] == INF ){
			p[i] = -1;
		}
		else
			p[i] = u;
	}
	dist[u] = 0;
	flag[u] = true;
	for(int i = 1;i <= n;i++){
		int temp = INF,t = u;
		for(int j=1; j<=n; j++)
			if( !flag[j] && dist[j] < temp ){
				t = j;
				temp = dist[j];
			}

		if( t==u ) return;
		flag[t] = true;

		for( int j = 1;j <= n;j++ )
			if( !flag[j] && map[t][j] < INF )
				if( dist[j] > ( dist[t] + map[t][j] ) ){
					dist[j] = dist[t] + map[t][j];
					p[j] = t;
				}
	}
}
int main(void)
{
	int u,v,w,st;
	//输入
	cout << "城市个数:" << endl;
	cin >> n;
	cout << "城市间路线个数:" << endl;
	cin >> m;
	cout << "城市间路线以及距离:" << endl;
	//初始化默认距离
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= n;j++){
			map[i][j] = INF;
		}
	}
	//写入u到v的距离w
	while( m-- ){
		cin >> u >> v >> w;
		map[u][v] = min(map[u][v],w);
	}
	cout << "原点:" << endl;
	cin >> st;
	//得到最短距离dist[]
	Dijkstra(st);
	//输出
	for(int i = 1;i <= n;i++){
		cout << st << "要去" << i << endl;
		if( dist[i] == INF ){
			cout << "无路可达" << endl;
		}
		else
			cout << "最短距离为" << dist[i] << endl;
	}
	return 0;
}

