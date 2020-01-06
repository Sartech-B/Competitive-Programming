#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a, b;
	cin>>a>>b;
	char ans[a.length()];
	bool f = 0;
	for(int i=0; i<a.length(); i++)
	{
		if(a[i]==b[i])
		{
			if(a[i]=='z') ans[i] = 'z';
			else ans[i] = a[i]+1;
		}
		else if(b[i]>a[i])
		{
			f = 1;
			break;
		}
		else if(a[i]>b[i]) ans[i] = b[i];
	}
	if(f) cout<<-1<<endl;
	else
	{
		for(int i=0; i<a.length(); i++)
		{
			cout<<ans[i];
		}
	}
	cout<<endl;
	return 0;
}