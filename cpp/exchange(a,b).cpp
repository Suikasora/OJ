#include <bits/stdc++.h>
using namespace std;
////////////////////////QWQ

void exchange(int *a,int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
int main(void)
{
	int a = 1, b = 2;
	exchange(&a,&b);

	cout << a << b;
	return 0;
}
