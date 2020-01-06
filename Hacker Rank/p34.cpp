#include <bits/stdc++.h>

using namespace std;

int main()
{
	int k;
	string a, b;
	cin>>a>>b>>k;
	int n = a.length(), m = b.length();
	int l = 0;
	for(int i=0; i<min(n, m); i++)
	{
		if(a[i]==b[i]) l++;
		else break;
	}
	l *= 2;
	if(!l)
	{
		if(2*m<=k) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	else if((n+m-l)<=k)
	{
		int rem = k-n-m+l;
		if(rem%2==0 || rem>=2*m) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
	else cout<<"No"<<endl;
}