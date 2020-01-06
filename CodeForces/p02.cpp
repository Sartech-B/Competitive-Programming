#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	cin>>a;
	int ans = 0;
	for(int i=0; i<a.length()-1; i++)
	{
		if(a[i]=='V' && a[i+1]=='K')
		{
			ans++;
			a[i] = '0';
			a[i+1] = '0';
			i++;
		}
	}
	for(int i=0; i<a.length()-1; i++)
	{
		if(a[i]!='0' && a[i+1]!='0')
		{
			if(a[i]=='V' || a[i+1]=='K')
			{
				ans++;
				break;
			}
		}
	}
	cout<<ans<<endl;
	return 0;
}