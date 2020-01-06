#include <bits/stdc++.h>

using namespace std;

int n, m;

int f(int);

int main()
{
	cin>>n>>m;
	if(n<m) cout<<n<<endl;
	else cout<<n+f(n/m)<<endl;
}

int f(int a)
{
	if(a<m) return a;
	else return f(a/m)+a;
}