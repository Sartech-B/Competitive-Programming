#include <bits/stdc++.h>

using namespace std;

typedef long long unsigned int ll;

int dist(string);
ll con(ll, int);

char a[15] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'F'}

int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	int T;
	scanf("%d", &T);
	for(int tt=1; tt<=T; tt++)
	{
		printf("Case #%d: ", tt);
		string str;
		cin>>str;
		int base = dist(str);
		map<char, int> m;
		int p = 0;
		for(int i=0; i<str.length(); i++)
		{
			if(m.find(str[i])==m.end())
			{
				if(i==0)
					m[str[i]] = 1;
				else
				{
					m[str[i]] = p;
					if(i==1)  p += 2;
					else p++;
				}
			}
		}
		int d = 1;
		ll num = 0;
		for(int i=str.length()-1; i>=0; i--)
		{
			num += d * m[str[i]];
			d *= 10;
		}
		cout<<con(num, base)<<endl;
	}
	return 0;
}

ll con(ll n, int b)
{
	while(n!=0)
	{
		
	}
}

int dist(string str)
{
	vector<char> f;
	int ret = 0;
	for(int i=0; i<str.length(); i++)
	{
		if(find(f.begin(), f.end(), str[i]) == f.end())
		{
			f.push_back(str[i]);
			ret++;
		}
	}
	return ret;
}
