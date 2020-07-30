#include <bits/stdc++.h>
using namespace std;
////////////////////////QWQ

const int MAX_N = 1e6;
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
void get_prime(vector<int> &prime, int n){
	vector<bool> is_prime(n + 1, true);
	if( n < 2 ){
		return;
	}
	for( int i = 2 ; i <= n ; ++i ){
		if( is_prime[i] ){
			prime.push_back(i);
			for(int j = i*i; j <= n; j += i)
				is_prime[j] = false;
		}
	}
}
int main(){
	int n;
	cin >> n;
	vector<int> prime;
	get_prime(prime,n);
	cout << prime.size() << endl;
	return 0;
}
