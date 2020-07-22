#include <iostream>
#include <algorithm>

using namespace std;
////////////////////////QWQ
bool cmp(int a,int b){
	return a > b;
}
int main(void)
{
	int a[10] = {0,1,2,3,4,5,6,7,8,9};
	//sort(),时间复杂度为nlogn
	sort(a,a+10,cmp);
	for(int i = 0;i < 10;i++){
		cout << a[i] << " ";
	}
	return 0;
}
