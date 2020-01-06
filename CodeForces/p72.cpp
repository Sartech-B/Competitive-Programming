#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, c, s = 0;
	cin>>n>>c;
	for(int i=0; i<n; i++)
	{
		int v;
		cin>>v;
		s += v;
	}
	int m = n*(2*c-1)-2*s;
	if(m<0) m = 0;
	cout<<m<<endl;
}