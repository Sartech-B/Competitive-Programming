#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a, b;
		cin>>a>>b;
		string s = "";
		vector<int> arr;
		int n = a.length(), m = b.length(), l;
		for(int i=0; i<n; i++)
		{
			if(a[i]<'a')
			{
				s += a[i];
				arr.push_back(i);
			}
		}
		l = s.length();
		bool f = 1;
		int i = 0, j = 0;
		while(i<l && j<m)
		{
			if(s[i]==b[j])
			{
				i++;
				j++;
			}
			else
			{
				int nj = -1;
				for(int k=j+1; k<m; k++)
				{
					if(s[i]==b[k])
					{
						nj = k;
						break;
					}
				}
				if(nj==-1)
				{
					f = 0;
					break;
				}
				int curr = (i==0 ? 0 : arr[i-1]+1);
				for(int k=j; k<nj; k++)
				{
					bool fi = 0;
					for(int y=curr; y<arr[i]; y++)
					{
						if(b[k]==a[y]-'a'+'A')
						{
							fi = 1;
							curr = y+1;
							break;
						}
					}
					if(!fi)
					{
						f = 0;
						break;
					}
				}
				i++;
				j++;
			}
		}
		if(f) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}