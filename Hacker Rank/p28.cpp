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
		int n = a.length();
		bool f = 1;
		for(int i=0; i<n/2; i++)
		{
			if(abs(a[i]-a[i+1])!=abs(a[n-i-1]-a[n-i-2]))
			{
				f = 0;
				break;
			}
		}
		if(f) cout<<"Funny"<<endl;
		else cout<<"Not Funny"<<endl;
	}
}