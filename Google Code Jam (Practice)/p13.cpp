#include <bits/stdc++.h>

using namespace std;

bool isSorted(string);

int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	
	int T;
	cin>>T;
	for(int tt=1; tt<=T; tt++)
	{
		cout<<"Case #"<<tt<<": ";
		
		string a;
		cin>>a;
		if(isSorted(a))
		{
			cout<<a<<endl;
			continue;
		}
		bool f = 0;
		int n = a.length();
		for(int i=0; i<n; i++)
		{
			if(a[i]=='0')
			{
				f = 1;
				n--;
				if(a[0]!='1')
				{
					a[0]--;
					cout<<a[0];
				}
				while(n--) cout<<"9";
				cout<<endl;
				break;
			}
		}
		if(f) continue;
		for(int i=n-1; i>0; i--)
		{
			if(a[i]<a[i-1])
			{
				a[i-1]--;
				for(int j=i; j<n; j++) a[j] = '9';
			}
		}
		cout<<a<<endl;
	}
}

bool isSorted(string a)
{
	for(int i=0; i<a.length()-1; i++)
	{
		if(a[i]>a[i+1]) return 0;
	}
	return 1;
}