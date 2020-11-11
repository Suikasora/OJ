#include <bits/stdc++.h>
using namespace std;
////////////////////////
int data[]={1,2,3,4,5,6,7,8,9,10};
void Swap(int a,int b){int temp=a;a=b;b=temp;}
int num=0;
void Perm(int begin,int end)
{
	int i;
	if( begin == end ){
		num++;
	}
	else
		for(i = begin;i<=end;i++){
			Swap(data[begin],data[i]);
			Perm(begin+1,end);
			Swap(data[begin],data[i]);
		}
}
int main(void)
{
	Perm(0,9);
	cout<<num<<endl;
	return 0;
}
