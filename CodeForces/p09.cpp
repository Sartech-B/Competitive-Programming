#include <bits/stdc++.h>

using namespace std;

int main()
{
	bool f = 0;
	int n, k;
	cin>>n>>k;
	string t;
	cin>>t;
	int a[n], c[10], ans[10];
	for(int i=0; i<10; i++)
	{
		c[i] = 0;
		ans[i] = 0;
	}
	for(int i=0; i<n; i++)
	{
		a[i] = t[0]-'0';
		c[a[i]]++;
	}
	sort(c, c+10);
	for(int i=9; i>=0; i--)
	{
		if(c[i]==k)
		{
			f = 1;
			cout<<"0"<<endl;
			cout<<t<<endl;
			break;
		}
		else
		{
			int b[n] = a;
			//sort(b, b+n);
			int cost = 1, cnt = c[i];
			while(cnt<k)
			{
				//less than cost
				cost++;
			}
		}
	}
	if(!f)
	{
		int mn = 99999999;
		for(int i=0; i<10; i++)
		{
			if(!ans[i]) continue;
			mn = min(mn, ans[i]);
		}
		cout<<mn<<endl;
		for(int i=0; i<n; i++) cout<<a[i];
		cout<<endl;
	}
}