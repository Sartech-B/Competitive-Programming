#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	string a;
	cin>>a;
	vector<pair<int, int> > m;
	int ans = 0, prev = -1;
	for(int i=0; i<n-2; i++)
	{
		if(a[i]=='0' && a[i+1]=='1' && a[i+2]=='0')
		{
			if(prev==-1) prev = i+2;
			else if(prev==i)
			{
				i++;
				continue;
			}
			else prev = i+2;
			ans++;
		}
	}
	cout<<ans<<endl;
}