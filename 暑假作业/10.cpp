#include <bits/stdc++.h>
using namespace std;
////////////////////////QWQ

int gcd(int a,int b){
	if( b == 0  ){
		return a;
	}
	return gcd(b,a%b);
}
int main(void)
{
	int x1,x2,y1,y2;
	cin >> x1 >> y1 >> x2 >> y2;
	//三角形的长
	int c = (x1 - x2) / gcd(abs(x1-x2),abs(y1-y2));
	//三角形的宽
	int k = (y1 - y2) / gcd(abs(x1-x2),abs(y1-y2));
	//格点数
	int ans = gcd(abs(x1-x2),abs(y1-y2))-1;
	while( ans ){
		x1 -= c;
		y1 -= k;
		printf("（%d,%d）\n",x1,y1);
		ans--;
	}
	return 0;
}
