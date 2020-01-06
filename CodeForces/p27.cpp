#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a, r = "hello";
	cin>>a;
	int j = 0;
	for(int i=0; i<a.length(); i++)
	{
		if(r[j]==a[i]) j++;
		if(j>=5) break;
	}
	if(j>=5) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}