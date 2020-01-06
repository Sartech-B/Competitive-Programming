//Not a competition Problem just a challenge to an easier problem with harder contraints
#include <bits/stdc++.h>

using namespace std;

vector<long long int> a;

long long int conInt(string);
void rec(string, int);

int main()
{
	rec("", 1);
	sort(a.begin(), a.end());
	//for(int i=0; i<a.size(); i++) cout<<a[i]<<endl;
	long long int n;
	cin>>n;
	bool f = 0;
	for(int i=0; i<a.size() && a[i]<=n; i++)
	{
		if(n%a[i]==0)
		{
			f = 1;
			cout<<a[i]<<endl;
			break;
		}
	}
	if(f) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}

void rec(string s, int l)
{
	string c1 = s, c2 = s;
	c1 += '4';
	c2 += '7';
	a.push_back(conInt(c1));
	a.push_back(conInt(c2));
	if(l==18) return;
	rec(c1, l+1);
	rec(c2, l+1);
}

long long int conInt(string s)
{
	long long int ret = 0;
	for(int i=0; i<s.length(); i++)
	{
		ret += (s[i]-'0')*(pow(10, s.length()-i-1));
	}
	return ret;
}