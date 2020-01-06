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
		int a = 0, b = 0, c = 0, d = 0, e = 0;
		while(n--)
		{
			string s;
			cin>>s;
			if(s=="cakewalk") a++;
			else if(s=="simple") b++;
			else if(s=="easy") c++;
			else if(s=="easy-medium") d++;
			else if(s=="medium") d++;
			else if(s=="medium-hard") e++;
			else if(s=="hard") e++;
		}
		if(a && b && c && d && e) cout<<"Yes"<<endl;
		else cout<<"No"<<endl;
	}
}