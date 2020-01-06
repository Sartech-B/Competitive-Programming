#include <bits/stdc++.h>

using namespace std;

long int sumSqr(int);
long int sqrSum(int);

long int sumSqr(int n){
	long int ans = 0;
	for(int i=1; i<=n; i++) ans += i*i;
	return ans;
}

long int sqrSum(int n){
	long int ans = n*n*(n+1)*(n+1)/4;
	return ans;
}

int main()
{
	long int ans = sqrSum(100) - sumSqr(100);
	cout<<ans<<endl;
}