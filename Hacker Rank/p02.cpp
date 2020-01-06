#include <bits/stdc++.h>

using namespace std;

int sum(int);

int main()
{
	int n;
	cin>>n;
	int mx = 0, ans;
	for(int i=1; i<=n; i++)
	{
		if(n%i==0)
		{
			if(sum(i)>mx)
			{
				mx = sum(i);
				ans = i;
			}	
		}
	}
	cout<<ans;
}

int sum(int n)
{
	int ret = 0;
	while(n!=0)
	{
		ret += n%10;
		n /= 10;
	}
	return ret;
}