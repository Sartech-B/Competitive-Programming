#include <bits/stdc++.h>

using namespace std;

int main()
{
	int r, c;
	cin>>r>>c;
	string a[r];
	for(int i=0; i<r; i++) cin>>a[i];
	if(r%3!=0 && c%3!=0)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	bool rs = 1;
	char prev = a[0][0];
	for(int i=1; i<r; i++)
	{
		if(a[i][0]!=prev)
		{
			rs = 0;
			break;
		}
	}
	if(rs)
	{
		if(c%3!=0)
		{
			cout<<"NO"<<endl;
			return 0;
		}
		int d = c/3;
		char key[3] = {a[0][0], a[0][d*2-1], a[0][d*3-1]};
		bool f = 0;
		for(int i=0; i<c; i++)
		{
			char cur = key[i/d];
			for(int j=0; j<r; j++)
			{
				if(a[j][i]!=cur)
				{
					f = 1;
					break;
				}
			}
			if(f) break;
		}
		if(!f) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
	else
	{
		if(r%3!=0)
		{
			cout<<"NO"<<endl;
			return 0;
		}
		int d = r/3;
		char key[3] = {a[0][0], a[d*2-1][0], a[d*3-1][0]};
		bool f = 0;
		for(int i=0; i<r; i++)
		{
			char cur = key[i/d];
			for(int j=0; j<c; j++)
			{
				if(a[i][j]!=cur)
				{
					f = 1;
					break;
				}
			}
			if(f) break;
		}
		if(!f) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}