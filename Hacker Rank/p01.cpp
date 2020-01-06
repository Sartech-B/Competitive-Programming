#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin>>n>>m;
	n = (n%2==0) ? n : n+1;
	m = (m%2==0) ? m : m+1;
	cout<<n*m/4;
	return 0;
}