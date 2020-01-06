#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	string a;
	cin>>a;
	int h = 0, ans = 0;
	for(int i=0; i<n; i++)
	{
		if(!h && a[i]=='D') ans++;
		if(a[i]=='D') h--;
		else h++;
	}
	cout<<ans<<endl;
}