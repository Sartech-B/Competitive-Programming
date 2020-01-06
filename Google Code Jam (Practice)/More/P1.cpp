#include <bits/stdc++.h>

using namespace std;

int n_digits(int);

int n_digits(int num){
	int temp, ans;
	do{
		temp = num/10;
		num /= 10;
		ans++;
	}while(temp > 0);
	return ans;
} 

int main(){
	int num, digits, temp, d, check;
	cin>>num;
	digits = n_digits(num);
	for(int i=1;i<=digits;i++){
		temp = num % 10;
		num /= 10;
		check += temp * temp * temp;
	}
	cout<<check<<endl;
}