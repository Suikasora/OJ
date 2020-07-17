#include <bits/stdc++.h>
using namespace std;
////////////////////////QWQ

int num;
char A[23][23];
int theX,theY;
int mov[4][2]={
	{0,-1},
	{0,1},
	{1,0},
	{-1,0}
};
#define CHECK(x,y) (x<theX && y<theY && x>0 && y>0)
struct typexy{
	int x,y;
};
void BFS(int x0,int y0)
{
	num=1;
	queue<typexy> a;
	typexy start,next;
	start.x=x0;
	start.y=y0;
	a.push(start);
	while( !a.empty() ){
		start=a.front();
		a.pop();
		for(int i = 0;i < 4;i++){
			next.x=start.x+mov[i][0];
			next.y=start.y+mov[i][1];
			if( CHECK(next.x,next.y) && A[next.x][next.y]=='.' ){
				A[next.x][next.y] = '#';
				num++;
				a.push(next);
			}
		}
	}
}
int main(void)
{
	int x0,y0;
	while( cin>>theX>>theY ){
		if(theX==0 && theY == 0)
			break;
		for(int i = 0;i < theX;i++){
			for(int j = 0;j < theY;j++){
				cin>>A[i][j];
				if( A[i][j]=='@' ){
					x0=i;
					y0=j;
				}
			}
		}
		num=0;
		BFS(x0,y0);
		cout<<num<<endl;
	}
	return 0;
}
