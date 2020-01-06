#include <iostream>

using namespace std;

int f(int);
int g(int);

int main()
{
	while(true)
	{
		int n;
		cin>>n;
		if(n==-1) return 0;
		cout<<f(n)<<endl;
	}
	return 0;
}

int f(int n)
{
	if(n==0) return 0;
	else if(n==1) return 0;
	else if(n==2) return 3;
	return f(n-2) + (g(n-1) * 2);
}

int g(int n)
{
	if(n==1) return 1;
	else if(n==2) return 0;
	return f(n-1) + g(n-2);
}