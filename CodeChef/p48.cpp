#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	cin.ignore();
	while(t--)
	{
		string a;
		getline(cin, a);
		int n = a.length();
		if(a[0]>='a' && a[0]<='z') a[0] -= 'a'-'A';
		cout<<a[0];
		for(int i=0; i<n; i++)
		{
			if(a[i]==' ')
			{
				cout<<". ";
				if(a[i+1]>='a' && a[i+1]<='z') a[i+1] -= 'a'-'A';
				cout<<a[i+1];
			}
			else if(a[i]>='A' && a[i]<='Z') a[i] += 'a'-'A';
		}
		for(int i=n-1; i>=0; i--)
		{
			if(i==0 || a[i-1]==' ')
			{
				for(int j=i+1; j<n; j++) cout<<a[j];
				cout<<endl;
				break;
			}
		}
	}
}