#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a2[n][n], a5[n][n], dp2[n][n], dp5[n][n];
	char path2[n][n], path5[n][n];
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			int v;
			cin>>v;
			a2[i][j] = 0;
			if(v%2==0)
			{
				for(int k=1; k<=30; k++)
				{
					if(v%int(pow(2, k))==0)
					{
						a2[i][j] += k;
						v /= int(pow(2, k));
					}
					else break;
				}
			}
			a5[i][j] = 0;
			if(v%5==0)
			{
				for(int k=1; k<=13; k++)
				{
					if(v%int(pow(5, k))==0)
					{
						a5[i][j] += k;
						v /= int(pow(2, k));
					}
					else break;
				}
			}
		}
	}
	dp2[0][0] = a2[0][0];
	dp5[0][0] = a5[0][0];
	for(int i=1; i<n; i++)
	{
		dp2[i][0] = a2[i][0]+dp2[i-1][0];
		dp2[0][i] = a2[0][i]+dp2[0][i-1];
		path2[i][0] = 'D';
		path2[0][i] = 'R';
		dp5[i][0] = a5[i][0]+dp5[i-1][0];
		dp5[0][i] = a5[0][i]+dp5[0][i-1];
		path5[i][0] = 'D';
		path5[0][i] = 'R';
	}
	for(int i=1; i<n; i++)
	{
		for(int j=1; j<n; j++)
		{
			if(dp2[i-1][j]<dp2[i][j-1])
			{
				dp2[i][j] = a2[i][j]+dp2[i-1][j];
				path2[i][j] = 'D';
			}
			else
			{
				dp2[i][j] = a2[i][j]+dp2[i][j-1];
				path2[i][j] = 'R';
			}
			if(dp5[i-1][j]<dp5[i][j-1])
			{
				dp5[i][j] = a5[i][j]+dp5[i-1][j];
				path5[i][j] = 'D';
			}
			else
			{
				dp5[i][j] = a5[i][j]+dp5[i][j-1];
				path5[i][j] = 'R';
			}
		}
	}
	if(dp2[n-1][n-1]<dp5[n-1][n-1])
	{
		string ans = "";
		int i = n-1, j = n-1;
		while(i!=0 || j!=0)
		{
			ans += path2[i][j];
			if(path2[i][j]=='D') i--;
			else j--;
		}
		reverse(ans.begin(), ans.end());
		cout<<dp2[n-1][n-1]<<endl<<ans<<endl;
	}
	else
	{
		string ans = "";
		int i = n-1, j = n-1;
		while(i!=0 || j!=0)
		{
			ans += path5[i][j];
			if(path5[i][j]=='D') i--;
			else j--;
		}
		reverse(ans.begin(), ans.end());
		cout<<dp5[n-1][n-1]<<endl<<ans<<endl;
	}
}