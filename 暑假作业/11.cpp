#include <bits/stdc++.h>
using namespace std;
////////////////////////QWQ
bool isPrime(int num){
	if( num <= 3 ){
		return num > 1;
	}
	if( num % 6 != 1 && num % 6 != 5 ){
		return false;
	}
	int sqrt = std::sqrt(num);
	for( int i = 5; i <= sqrt; i += 6 ){
		if( num % i == 0 || num % (i + 2) == 0 ){
			return false;
		}
	}
	return true;
}
int main(void)
{
	int num;
	cin >> num;
	if( isPrime(num) ){
		puts("Yes");
	}
	else{
		puts("No");
	}
	return 0;
}
