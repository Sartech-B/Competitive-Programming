#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		int n = a.length(), cnt[300][2];
		for(int i=0; i<300; i++) cnt[i][0] = cnt[i][1] = 0;
		int i = 0, j = n-1;
		while(i<(n/2) && j>=int(ceil(float(n)/2)))
		{
			if(a[i]!=a[j])
			{
				cnt[a[i]][0]++;
				cnt[a[j]][1]++;
			}
			i++;
			j--;
		}
		bool f = 1;
		for(i=0; i<n/2; i++)
		{
			if(cnt[a[i]][0]!=cnt[a[i]][1])
			{
				cout<<"NO"<<endl;
				f = 0;
				break;
			}
		}
		if(f) cout<<"YES"<<endl;
	}
}