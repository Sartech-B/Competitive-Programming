#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, p, p2;
	cin>>n>>p;
	p2 = (n%2==0 ? n+1-p : n-p);
    p = (p%2==0 ? p/2 : (p-1)/2);
    p2 = (p2%2==0 ? p2/2 : (p2-1)/2);
	cout<<min(p, p2)<<endl;
}