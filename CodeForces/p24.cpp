#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	cin>>a;
	bool f = 1, f1 = 0;
	for(int i=a.length()-1; i>=0; i--)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			if(!i)
			{
				f1 = 1;
				break;
			}
			f = 0;
			break;
		}
	}
	if(f)
	{
		for(int i=0; i<a.length(); i++)
		{
			if(a[i]>='A' && a[i]<='Z') a[i] += 'a'-'A';
		}
		if(f1) a[0] -= 'a'-'A';
	}
	cout<<a<<endl;
}