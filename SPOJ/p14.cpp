#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n, m;
		cin>>n>>m;
		if(!n || !m)
		{
			cout<<endl;
			continue;
		}
		cout<<"*";
		for(int i=0; i<m*3; i++) cout<<"*";
		cout<<endl;
		for(int i=0; i<n*3; i++)
		{
			cout<<"*";
			for(int j=0; j<m*3; j++)
			{
				if((i+1)%3!=0 && (j+1)%3!=0) cout<<".";
				else cout<<"*";
			}
			cout<<endl;
		}
		cout<<endl;
	}
}