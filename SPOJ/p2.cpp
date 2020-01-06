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
		stack<char> s;
		for(int i=0; i<a.length(); i++)
		{
			if(a[i]==')')
			{
				cout<<s.top();
				s.pop();
				s.pop();
			}
			else if(a[i]>='a' && a[i]<='z') cout<<a[i];
			else s.push(a[i]);
		}
		cout<<endl;
	}
}