#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string a;
		cin>>a;
		bool p = 0, q = 0;
		for(int i=0; i<a.length(); i++)
		{
			if(a[i]=='Y')
			{
				p = 1;
				break;
			}
			if(a[i]=='I')
			{
				q = 1;
				break;
			}
		}
		if(p) cout<<"NOT INDIAN"<<endl;
		else if(q) cout<<"INDIAN"<<endl;
		else cout<<"NOT SURE"<<endl;
	}
	return 0;
}