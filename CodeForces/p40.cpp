#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	bool p2 = 0, f = 0;
	int a[n], s = 0;
	for(int i=0; i<n; i++) cin>>a[i];
	if(n==1)
	{
		cout<<"YES"<<endl;
		return 0;
	}
	if(a[0]<a[1])
	{
		p2 = 1;
		s = 1;
	}
	else if(a[0]==a[1])
	{
		p2 = 1;
		s = 2;
	}
	else if(a[0]>a[1])
	{
		p2 = 1;
		s = 3;
	}
	for(int i=1; i<n-1; i++)
	{
		switch(s)
		{
			case 1: if(a[i]>a[i+1])
					{
						p2 = 1;
						s = 3;
					}
					else if(a[i]==a[i+1])
					{
						p2 = 1;
						s = 2;
					}
					else if(i==n-2) p2 = 1;
				break;
			case 2: if(a[i]<a[i+1])
					{
						cout<<"NO"<<endl;
						f = 1;
						break;
					}
					else if(a[i]>a[i+1])
					{
						p2 = 1;
						s = 3;
					}
					else if(i==n-2) p2 = 1;
				break;
			case 3: if(a[i]==a[i+1] || a[i]<a[i+1])
					{
						cout<<"NO"<<endl;
						f = 1;
						break;
					}
				break;
		}
		if(f) break;
	}
	if(!p2 && !f)
	{
		f = 1;
		cout<<"NO"<<endl;
	}
	else if(p2 && !f) cout<<"YES"<<endl;
}