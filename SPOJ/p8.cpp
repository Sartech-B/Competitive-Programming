#include <bits/stdc++.h>

using namespace std;

int main()
{
	while(1)
	{
		int n;
		cin>>n;
		if(!n) break;
		string a;
		cin>>a;
		for(int i=0; i<n; i++)
		{
			for(int j=i; j<a.length(); j+=2*(n-i)-1)
			{
				cout<<a[j];
				if(j!=a.length()-1 && i!=j)
				{
					j += i*2+1;
					if(j>=a.length()) break;
					cout<<a[j];
				}
			}
		}
		cout<<endl;
	}
}