#include <bits/stdc++.h>

using namespace std;

string decrement(string, int);

int main()
{
	string a;
	cin>>a;
	int ans[4] = {8, 4, 2, 6}, n = a.length();
	if(a=="0")
	{
		cout<<1<<endl;
		return 0;
	}
	a = decrement(a, n-1);
	if(n==1 && (a[0]>='0' && a[0]<='3'))
	{
		cout<<ans[a[0]-'0']<<endl;
		return 0;
	}
	if((a[n-1]-'0')%2==0)
	{
		string p1 = decrement(decrement(a, n-1), n-1), p2 = a;
		int d1 = p1[p1.length()-2]*10 + p1[p1.length()-1], d2 = p2[p2.length()-2]*10 + p2[p2.length()-1];
		if(d1%4==0) cout<<ans[2]<<endl;
		else if(d2%4==0) cout<<ans[0]<<endl;
	}
	else
	{
		string p1 = decrement(decrement(decrement(a, n-1), n-1), n-1), p2 = decrement(a, n-1);
		int d1 = p1[p1.length()-2]*10 + p1[p1.length()-1], d2 = p2[p2.length()-2]*10 + p2[p2.length()-1];
		if(d1%4==0) cout<<ans[3]<<endl;
		else if(d2%4==0) cout<<ans[1]<<endl;
	}
}

string decrement(string a, int k)
{
	if(a[k]=='0')
	{
		a[k] = '9';
		a = decrement(a, k-1);
	}
	else a[k]--;
	
	return a;
}