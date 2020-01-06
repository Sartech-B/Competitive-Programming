#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, x = 0;
	cin>>n;
	while(n--)
	{
		string a;
		cin>>a;
		if(a[0]=='+' || a[1]=='+') x++;
		else x--;
	}
	cout<<x<<endl;
}