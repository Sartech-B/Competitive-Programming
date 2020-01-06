#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, p, s = 0;
	cin>>n>>k>>p;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	string b;
	cin>>b;
	for(int i=0; i<p; i++)
	{
		if(b[i]=='!') s--;
		else
		{
			int mx = 0;
			for(int j=0; j<n; j++)
			{
				int c = 0, pi = j+s;
				while(pi<0) pi += n;
				if(a[pi])
				{
					for(int m=j; m<n && m<j+k; m++)
					{
						pi = m+s;
						while(pi<0) pi += n;
						if(a[pi]) c++;
					}
					mx = max(mx, c);
				}
			}
			cout<<mx<<endl;
		}
	}
}