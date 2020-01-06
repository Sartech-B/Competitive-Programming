#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	cin.ignore();
	string a;
	getline(cin, a);
	int ans = 0, cnt = 0;
	for(int i=0; i<n; i++)
	{
		if(a[i]>='A' && a[i]<='Z') cnt++;
		else if(a[i]==' ')
		{
			ans = max(ans, cnt);
			cnt = 0;
		}
	}
	ans = max(ans, cnt);
	cout<<ans<<endl;
}