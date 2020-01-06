#include <bits/stdc++.h>

using namespace std;

int n, m;

string add(string, string);
string divide(string, int);
string diff(string, string);

int main()
{
	int t = 10;
	while(t--)
	{
		string a, b, s, x, y, d;
		cin>>a>>b;
		s = add(a, b);
		cout<<s<<endl;
		/*s = add(a, b);
		n = s.length();
		x = divide(s, 2);
		xn = x.length();
		d = diff(a, b);
		m = d.length();
		y = divide(d, 2);
		yn = y.length();
		for(int i=xn-1; i>=0; i--) cout<<x[i];
		cout<<endl;
		for(int i=yn-1; i>=0; i--) cout<<y[i];
		cout<<endl;*/
	}
}

string add(string a, string b)
{
	int c = 0;
	string res = "";
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	for(int i=0; i<a.length(); i++)
	{
		if(i<b.length())
		{
			int a1 = a[i]-'0', b1 = b[i]-'0', s = a1+b1+c;
			res += s%10+'0';
			c = s/10;
		}
		else
		{
			int a1 = a[i]-'0', s = a1+c;
			res += s%10+'0';
			c = s/10;
		}
	}
	while(c)
	{
		res += c%10+'0';
		c /= 10;
	}
	reverse(res.begin(), res.end());
	return res;
}