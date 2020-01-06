#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	cin>>a;
	int cnt = 0;
	bool f = 0;
	for(int i=0; i<a.length(); i++)
	{
		if(i<=a.length()-3 && a[i]=='W' && a[i+1]=='U' && a[i+2]=='B')
		{
			f = 1;
			i += 2;
		}
		else
		{
			if(f && cnt>0) cout<<" ";
			cout<<a[i];
			f = 0;
			cnt++;
		}
	}
	cout<<endl;
}