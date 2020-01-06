#include <bits/stdc++.h>

using namespace std;
	
int main()
{
	int n, ans = 0;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			int v;
			scanf("%d", &v);
			if(i==j) ans += v;
		}
	}
	ans %= 2;
	int q;
	cin>>q;
	while(q--)
	{
		int ch;
		scanf("%d", &ch);
		if(ch==1 || ch==2)
		{
			int i;
			scanf("%d", &i);
			i--;
			ans = 1-ans;
		}
		else cout<<ans;
	}
	cout<<endl;
}