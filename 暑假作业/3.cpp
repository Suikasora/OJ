#include <bits/stdc++.h>
using namespace std;
////////////////////////QWQ

const int MAXN = 1e6;
struct node{
	int x,y;
}s[MAXN];
bool cmp(node x1, node x2){
	return x1.x < x2.x;
}
int main(void)
{
	//l单位距离，初始p油，n个加油站
	int p,l,n;
	cin >> n;
	for(int i = 0;i < n;i++){
		cin >> s[i].x >> s[i].y;
	}
	cin >> p >> l;
	//将距离终点的距离变成距离起点的距离
	for(int i = 0;i < n;i++){
		s[i].x = p - s[i].x;
	}
	//初始化终点
	s[n].x = p;
	s[n].y = 0;
	n++;
	sort(s,s+n,cmp);

	priority_queue<int>pq;
	//ans加油次数，pos当前位置，tank油箱汽油量
	int ans = 0, pos = 0, tank = l;
	for(int i = 0;i < n;i++){
		//到下一个加油站的路程
		int d = s[i].x - pos;
		//剩余油量不足以支持到达
		while(tank - d < 0){
			if( pq.empty() ){
				ans = -1;
				break;
			}
			tank += pq.top();
			pq.pop();
			ans++;
		}
		//油量减少
		tank -= d;
		//更新位置
		pos = s[i].x;
		pq.push(s[i].y);
	}
	cout << ans << endl;
	return 0;
}
