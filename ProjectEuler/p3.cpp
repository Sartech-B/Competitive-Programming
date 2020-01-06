#include <bits/stdc++.h>

using namespace std;

bool isPrime(int);

bool isPrime(int n){
	int temp;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

int main(){
	long long int num = 600851475143, mx;
	for(long long int i=sqrt(num); i>1; i--){
		if(num%i==0 && isPrime(i)){
			mx = i;
			cout<<mx<<endl;
			break;
		}
	}
}