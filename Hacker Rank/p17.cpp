#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	cin>>a;
	int n = a.length(), cnt = 0;
	for(int i=0; i<n-2; i+=3)
	{
		if(a[i]!='S') cnt++;
		if(a[i+1]!='O') cnt++;
		if(a[i+2]!='S') cnt++;
	}
	cout<<cnt<<endl;
}