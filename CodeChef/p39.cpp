#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a;
		cin>>a;
		bool c = 0, e = 0, s = 0, f = 0;
		for(int i=0; i<a.length(); i++)
		{
			switch(a[i])
			{
				case 'C':
					if(s || e)
					{
						f = 1;
						break;
					}
					c = 1;
					break;
				case 'E':
					if(s)
					{
						f = 1;
						break;
					}
					e = 1;
					c = 0;
					break;
				case 'S':
					s = 1;
					break;
			}
		}
		if(f) cout<<"no"<<endl;
		else cout<<"yes"<<endl;
	}
}