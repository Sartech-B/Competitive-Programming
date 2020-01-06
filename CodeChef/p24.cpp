#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, c = 0;
	cin>>n;
	bool f = 0;
	for(int i=0; i<n; i++)
	{
		int t;
		cin>>t;
		if(t%2==0) c++;
		if(c>(n/2))
		{
			cout<<"READY FOR BATTLE"<<endl;
			f = 1;
			break;
		}
	}
	if(!f)
	{
		if(c>(n/2)) cout<<"READY FOR BATTLE"<<endl;
		else cout<<"NOT READY"<<endl;
	}
	return 0;
}