#include <bits/stdc++.h>

using namespace std;

string f(long int);

int main()
{
	long int n;
	cin>>n;
	string a = f(n);
	long int ans = 1;
	for(int i=0; i<a.length(); i++) ans *= (a[i]=='0' ? 2 : 1);
	cout<<ans<<endl;
}

string f(long int n)
{
	string res = "";
	while(n!=0)
	{
		if(n%2==0) res += '0';
		else res += '1';
		n /= 2;
	}
	return res;
}
