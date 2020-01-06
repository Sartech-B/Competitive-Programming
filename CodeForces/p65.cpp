#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	cin>>a;
	int n = a.length();
	if(n==1)
	{
		cout<<"No"<<endl;
		return 0;
	}
	
	for(int i=0; i<n-1; i++)
	{
		if(a[i]==a[i+1]) a[i] = a[i+1] = '0';
	}
	for(int i=1; i<n-2; i++)
	{
		if(a[i]=='0' && a[i+1]=='0' && a[i-1]!='0' && a[i+2]!='0')
		{
			a[i-1] = a[i+2] = '0';
			i += 2;
		}
	}
	
	bool p = 0, m = 0;
	int d = 0;
	for(int i=0; i<n; i++)
	{
		if(a[i]=='-') m = 1;
		if(a[i]=='+') p = 1;
		if(a[i]!='0') d++;
	}
	if((p && m) || d%2!=0) cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
}