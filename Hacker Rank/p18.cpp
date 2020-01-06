#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a, def = "hackerrank";
		cin>>a;
		int k = 0, n = a.length(), m = def.length();
		for(int i=0; i<n; i++)
		{
			if(a[i]==def[k]) k++;
		}
		if(k==m) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}