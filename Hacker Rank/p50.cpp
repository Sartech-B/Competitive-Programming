#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	long int a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	vector<vector<long int> > a0, a1, a2;
	for(int i=0; i<n; i++)
	{
		for(int j=i+1; j<n; j++)
		{
			for(int k=j+1; k<n; k++)
			{
				if(a[i]+a[j]>a[k] && a[j]+a[k]>a[i] && a[i]+a[k]>a[j])
				{
					vector<long int> t;
					t.push_back(a[i]);
					t.push_back(a[j]);
					t.push_back(a[k]);
					sort(t.begin(), t.end());
					a0.push_back(t);
				}
			}
		}
	}
	if(!a0.size())
	{
		cout<<-1<<endl;
		return 0;
	}
	if(a0.size()==1)
	{
		cout<<a0[0][0]<<" "<<a0[0][1]<<" "<<a0[0][2]<<endl;
		return 0;
	}
	long int mx = 0;
	for(int i=0; i<a0.size(); i++) mx = max(mx, a0[i][2]);
	for(int i=0; i<a0.size(); i++)
	{
		if(a0[i][2]==mx) a1.push_back(a0[i]);
	}
	mx = 0;
	for(int i=0; i<a1.size(); i++) mx = max(mx, a1[i][0]);
	for(int i=0; i<a1.size(); i++)
	{
		if(a1[i][0]==mx) a2.push_back(a1[i]);
	}
	cout<<a2[0][0]<<" "<<a2[0][1]<<" "<<a2[0][2]<<endl;
}