#include <bits/stdc++.h>

using namespace std;

bool check(vector<int>);

bool o[6][6];

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		for(int i=0; i<6; i++)
		{
			for(int j=0; j<6; j++) o[i][j] = (i==j ? 0 : 1);
		}
		int a[n];
		for(int i=0; i<n; i++) cin>>a[i];
		for(int i=0; i<n-1; i++) o[a[i]-1][a[i+1]-1] = 0;
		bool f = 0;
		vector<int> ans;
		for(int i=0; i<6; i++)
		{
			for(int j=0; j<6; j++)
			{
				for(int k=0; k<6; k++)
				{
					for(int l=0; l<6; l++)
					{
						for(int m=0; m<6; m++)
						{
							for(int x=0; x<6; x++)
							{
								if(o[0][i] && o[1][j] && o[2][k] && o[3][l] && o[4][m] && o[5][x])
								{
									vector<int> tmp;
									tmp.push_back(i);
									tmp.push_back(j);
									tmp.push_back(k);
									tmp.push_back(l);
									tmp.push_back(m);
									tmp.push_back(x);
									if(check(tmp))
									{
										f = 1;
										ans = tmp;
										break;
									}
								}
							}
						}
					}
				}
			}
		}
		if(f)
		{
			for(int i=0; i<6; i++) cout<<ans[i]+1<<" ";
			cout<<endl;
		}
		else cout<<-1<<endl;
	}
}

bool check(vector<int> a)
{
	if(a.size()==6)
	{
		bool tmp[6];
		for(int i=0; i<6; i++) tmp[i] = 0;
		for(int i=0; i<6; i++) tmp[a[i]] = 1;
		for(int i=0; i<6; i++)
		{
			if(!tmp[i]) return 0;
		}
		for(int i=0; i<6; i++)
		{
			if(a[a[i]]!=i) return 0;
		}
		return 1;
	}
	return 0;
}