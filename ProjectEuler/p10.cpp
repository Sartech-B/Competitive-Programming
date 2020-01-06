#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

bool isPrime(long int);

int main()
{
	long int ans = 2;
	for(long int i=3; i<2000000; i++)
	{
		if(isPrime(i))
		{
			ans += i;
			cout<<i<<endl;
			getch();
		}
	}
	cout<<ans<<endl;
}

bool isPrime(long int n)
{
	for(long int i=2; i<=sqrt(n); i++)
	{
		if(n%i==0) return 0;
	}
	return 1;
}