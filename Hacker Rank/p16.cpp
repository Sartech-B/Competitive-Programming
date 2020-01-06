#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	string a;
	cin>>a;
	int k1;
	cin>>k1;
	for(int i=0; i<n; i++)
	{
		int k = k1;
		if(a[i]>='a' && a[i]<='z')
		{
			while(a[i]+k>'z') k += 'a'-'z'-1;
			a[i] += k;
		}
		else if(a[i]>='A' && a[i]<='Z')
		{
			while(a[i]+k>'Z') k += 'A'-'Z'-1;
			a[i] += k;
		}
	}
	cout<<a<<endl;
}