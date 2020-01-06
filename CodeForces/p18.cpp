#include <bits/stdc++.h>

using namespace std;

vector<int> d(int);

int main()
{
	int n;
	cin>>n;
	vector<int> dp[1000];
	dp[1].push_back(1);
	dp[2].push_back(2);
	dp[2].push_back(1);
	for(int i=3; i<1000; i++)
	{
		vector<int> ret;
		ret.push_back(i);
		ret.push_back(1);
		for(int j=i/2; j>1; j--)
		{
			if(i%j==0)
			{
				vector<int> temp;
				ret.push_back(j);
				temp = dp[j];
				ret.insert(ret.end(), temp.begin(), temp.end());
				//break;
			}
		}
		dp[i] = ret;
	}
	for(int i=0; i<dp[n].size(); i++) cout<<dp[n][i]<<endl;
}

vector<int> d(int n)
{
	vector<int> ret, ret1;
	for(int i=n/2; i>1; i--)
	{
		if(n%i==0)
		{
			vector<int> temp;
			ret.push_back(i);
			temp = d(i);
			ret.insert(ret.end(), temp.begin(), temp.end());
			//break;
		}
	}
	//if(ret[0]>1) ret1 = d(n/ret[0]);
	//ret.insert(ret.end(), ret1.begin(), ret1.end());
	//ret.push_back(n);
	return ret;
}