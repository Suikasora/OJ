#include <ctime>
#include <bits/stdc++.h>
using namespace std;
////////////////////////
int main(void)
{
	clock_t start, end;
	start = clock();
	int a[999];
	for(int i = 0;i < 999;i++){
		a[i]=i;
	}
	end = clock();
	cout << (double)(end-start)/CLOCKS_PER_SEC << endl;
	return 0;
}
