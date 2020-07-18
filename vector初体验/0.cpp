#include <bits/stdc++.h>
using namespace std;
////////////////////////QWQ

int main(void)
{
	vector<int> vec;
	int a;
	cin >> a;
	vec.push_back(a);
	cout << vec[0] << endl;
	for(it=vec.begin();it!=vec.end();it++)
	{
		cout << *it << endl;
	}

	return 0;
}
