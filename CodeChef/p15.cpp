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
		int i = 0, j = a.length()-1;
		bool f = 0;
		while(i<j)
		{
			if(a[i]!=a[j])
			{
				f = 1;
				cout<<"losses"<<endl;
				break;
			}
			i++;
			j--;
		}
		if(!f) cout<<"wins"<<endl;
	}
	return 0;
}