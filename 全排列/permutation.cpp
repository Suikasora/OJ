#include <bits/stdc++.h>
using namespace std;
////////////////////////QWQ


int main(void)
{
	int data[4] = {1,3,2,4};
	sort(data,data+4);
	do{
		for(int i = 0;i < 4;i++){
			cout << data[i] << " ";
		}
		cout << endl;
	}while(next_permutation(data,data+4));
	return 0;
}
