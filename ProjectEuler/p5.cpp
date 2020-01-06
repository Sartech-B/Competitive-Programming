#include <bits/stdc++.h>

using namespace std;

bool isDivisible(long long int);

bool isDivisible(long long int n)
{
	for(int i=2; i<=20; i++)
	{
		if(n%i!=0) return 0;
	}
	return 1;
}

int main(){
	long long int i = 2520;
	while(1)
	{
		if(isDivisible(i))
		{
			cout<<i<<endl;
			break;
		}
		i++;
	}
}