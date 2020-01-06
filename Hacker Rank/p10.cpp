#include <bits/stdc++.h>

using namespace std;

bool tcmp(string, string);

int main()
{
	int n;
	cin>>n;
	string a[n];
	for(int i=0; i<n; i++) cin>>a[i];
	sort(a, a+n, tcmp);
	for(int i=0; i<n; i++) cout<<a[i]<<endl;
}

bool tcmp(string a, string b)
{
	if(a.length()>b.length()) return 0;
	else if(a.length()<b.length()) return 1;
	else
	{
		for(int i=0; i<a.length(); i++)
		{
			if(a[i]>b[i]) return 0;
			else if(a[i]<b[i]) return 1;
		}
	}
	return 0;
}