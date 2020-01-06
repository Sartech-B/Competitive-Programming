#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, k;
		cin>>n>>k;
		list<int> arr[n];
		int a[k], l[n], b[k];
		bool com = 0, f = 0;
		for(int i=0; i<k; i++) a[i] = 0;
		for(int i=0; i<k; i++) b[i] = 0;
		for(int i=0; i<n; i++)
		{
			int p, u = 0;
			cin>>p;
			l[i] = p;
			for(int j=0; j<p; j++)
			{
				int v;
				cin>>v;
				arr[i].push_back(v);
				if(a[v-1]>=1) u++;
				a[v-1]++;
			}
			if(u==p) com = 1;
		}
		for(int i=n-1; i>=0; i--)
		{
			int u = 0;
			for(list<int>::iterator it = arr[i].begin(); it!=arr[i].end(); it++)
			{
				if(b[*it-1]>=1) u++;
				b[*it-1]++;
			}
			if(u==l[i]) com = 1;
		}
		for(int i=0; i<k; i++)
		{
			if(!a[i])
			{
				cout<<"sad"<<endl;
				f = 1;
				break;
			}
		}
		if(f) continue;
		if(com) cout<<"some"<<endl;
		else cout<<"all"<<endl;
	}
	return 0;
}