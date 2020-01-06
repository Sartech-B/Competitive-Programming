#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	int a1 = 0, p1, a2 = 0, p2, i = 0;
	while(i<n)
	{
		if(a[i]==1)
		{
			int s = 0, p, pt, p3 = 0;
			for(int j=i; j<n; j++)
			{
				if(a[j]==2) 
				{
					p = j;
					break;
				}
				s++;
			}
			if(s>a1)
			{
				a1 = max(a1, s);
				p1 = p-1;
			}
			for(int j=p; j<n; j++)
			{
				if(!s)
				{
					pt = j;
					break;
				}
				if(a[j]==1) s++;
				else s--;
			}
			int k = 0, s1 = 0;
			for(int j=pt; j<n; j++)
			{
				if(a[j]==1) s1++;
				else s1--;
				k++;
				if(j>=n-2)
				{
					cout<<a1<<" "<<p1+1<<" "<<a2<<" "<<p2+1;
					return 0;
				}
				if(!s1)
				{
					p3 = j;
					break;
				}
			}
			if(k>a2)
			{
				a2 = max(a2, k);
				p2 = pt;
			}
			i = pt;
		}
	}
	cout<<a1<<" "<<p1+1<<" "<<a2<<" "<<p2+1;
	return 0;
}