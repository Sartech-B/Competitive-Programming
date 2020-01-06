#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a, b;
	cin>>a>>b;
	for(int i=0; i<a.length(); i++)
	{
		if(a[i]>='A' && a[i]<='Z') a[i] += 'a'-'A';
	}
	for(int i=0; i<b.length(); i++)
	{
		if(b[i]>='A' && b[i]<='Z') b[i] += 'a'-'A';
	}
	if(a<b) cout<<-1<<endl;
	else if(a==b) cout<<0<<endl;
	else cout<<1<<endl;
}