#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	cin>>a;
	int cnt = 0, n = a.length();
	for(int i=0; i<n; i++)
	{
		if(a[i]>='a' && a[i]<='z') cnt++;
	}
	if(cnt>=n-cnt) cout<<tolower(a)<<endl;
	else cout<<toupper(a)<<endl;
}