#include <bits/stdc++.h>

using namespace std;

int main()
{
	int a[14] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777}, n;
	cin>>n;
	bool f = 0;
	for(int i=0; i<14 && a[i]<=n; i++)
	{
		if(n%a[i]==0)
		{
			f = 1;
			break;
		}
	}
	if(f) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}