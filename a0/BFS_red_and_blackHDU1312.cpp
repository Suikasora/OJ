#include <bits/stdc++.h>
using namespace std;
////////////////////////QWQ


char room[23][23];
int dir[4][2] = {
	{-1,0},
	{0,1},
	{1,0},
	{0,-1}
};
int Wx,Hy,num;
#define CHECK(x,y) (x<Wx && x>=0 && y>=0 && y<Hy)
struct node{int x,y;};
void BFS(int dx,int dy){
	num=1;
	queue<node> q;
	node start,next;
	start.x = dx;
	start.y = dy;
	q.push(start);
	while( !q.empty() ){
		start = q.front();
		q.pop();
		for(int i = 0;i < 4;i++){
			next.x = start.x + dir[i][0];
			next.y = start.y + dir[i][1];
			if( CHECK(next.x,next.y) && room[next.x][next.y] == '.' ){
				room[next.x][next.y] = '#';
				num++;
				q.push(next);
			}
		}
	}
}
int main(void)
{
	int dx,dy;
	while( cin>>Wx>>Hy ){
		if( Wx == 0 && Hy == 0 ){
			break;
		}
		for(int y = 0;y < Hy;y++){
			for(int x = 0;x < Wx;x++){
				cin >> room[x][y];
				if( room[x][y] == '@' ){
					dx = x;
					dy = y;
				}
			}
		}
		num = 0;
		BFS(dx,dy);
		cout<<num<<endl;
	}
	return 0;
}
