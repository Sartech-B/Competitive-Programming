#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	cin>>a;
	int ans = 1;
	for(int i=0; i<a.length(); i++)
	{
		if(a[i]>='A' && a[i]<='Z') ans++;
	}
	cout<<ans<<endl;
}