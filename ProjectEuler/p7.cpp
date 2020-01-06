#include <bits/stdc++.h>

using namespace std;

bool isPrime(long int);

int main()
{
	int ans = 0, i = 2;
	while(1)
	{
		if(isPrime(i)) ans++;
		if(ans==10001)
		{
			cout<<i<<endl;
			break;
		}
		i++;
	}
}

bool isPrime(long int n)
{
	for(int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}