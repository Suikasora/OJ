#include <bits/stdc++.h>
using namespace std;
////////////////////////QWQ

int main(void)
{
	int n;
	cin >> n;
	string str;
	cin >> str;
	int i = 0, j = str.size() - 1;
	while( i <= j ){
		if( str.at(i) < str.at(j) && i <= j ){
			cout << str.at(i);
			i++;
		}
		else if( str.at(i) > str.at(j) && i<=j ){
			cout << str.at(j);
			j--;
		}
		else{
			//头和尾字母一样的情况
			int a,b;
			a = i;
			b = j;
			while( str.at(i) == str.at(j) && i < j ){
				i++;j--;
			}
			if( str.at(i) <= str.at(j) || i == j ){
				cout << str.at(a);
				j = b;
				i = a+1;
			}
			else if( str.at(i) > str.at(j) ){
				cout << str.at(b);
				i = a;
				j = b-1;
			}
		}
	}
	return 0;
}
