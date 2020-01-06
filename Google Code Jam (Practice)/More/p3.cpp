#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int retDenomNum(int *, int , int);

int main()
{
	int n, s;
	cin>>n;
	int d[n];
	for(int t=0; t<n; t++)
		cin>>d[t];
	
	cin>>s;
	int opt[s+1];
	opt[0] = 0;
	for(int i=1; i<=s; i++)
	{
		for(int j=0; j<retDenomNum(d, i, n); j++)
			opt[i] = opt[i-d[j]]+1;
			
	}
	printf("%d", opt[s]);
	getch();
}

int retDenomNum(int *a, int c, int n)
{
	int ret = 0;
	for(int i=0; i<n; i++)
	{
		if(a[i]<=c)
			ret++;
	}
	//cout<<ret<<endl;
	return ret;
}