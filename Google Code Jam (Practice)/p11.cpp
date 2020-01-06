#include <bits/stdc++.h>

using namespace std;

vector<pair<pair<int, int>, vector<int> > > f(string);
string digit(int, vector<int>);
bool isSub(vector<int>, vector<int>);
int g(int);

int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	
	int T;
	cin>>T;
	for(int tt=1; tt<=T; tt++)
	{
		cout<<"Case #"<<tt<<": ";
		
		int n;
		cin>>n;
		string a[n];
		vector<pair<pair<int, int>, vector<int> > > c[n];
		vector<string> ans;
		for(int i=0; i<n; i++)
		{
			cin>>a[i];
			c[i] = f(a[i]);
		}
		if(n==1)
		{
			if(a[0]=="1111111") cout<<"1110000"<<endl;
			else cout<<"ERROR!"<<endl;
			continue;
		}
		for(vector<pair<pair<int, int>, vector<int> > >::iterator init=c[0].begin(); init!=c[0].end(); init++)
		{
			int d = init->first.first, cur = init->first.second;
			vector<int> tmp = init->second, v1 = init->second;
			bool f = 0;
			for(int i=1; i<n; i++)
			{
				bool f1 = 0;
				for(vector<pair<pair<int, int>, vector<int> > >::iterator it=c[i].begin(); it!=c[i].end(); it++)
				{
					vector<int> v2 = it->second;
					tmp.insert(tmp.end(), v2.begin(), v2.end());
					if(it->first.first==g(d-i))
					{
						f1 = 1;
						if(i==n-1) f = 1;
						break;
					}
				}
				if(!f1) break;
			}
			sort(tmp.begin(), tmp.end());
			for(int i=0; i<n; i++)
			{
				for(vector<int>::iterator it=tmp.begin(); it!=tmp.end(); it++)
				{
					if(a[i][*it]=='1')
					{
						f = 0;
						break;
					}
				}
				if(!f) break;
			}
			if(f) ans.push_back(digit(g(d-n), v1));
		}
		if(ans.size()==1) cout<<ans.front()<<endl;
		else cout<<"ERROR!"<<endl;
	}
}

vector<pair<pair<int, int>, vector<int> > > f(string a)
{
	vector<pair<pair<int, int>, vector<int> > > ret;
	int n = 0;
	for(int i=0; i<a.length(); i++)
	{
		if(a[i]=='0') n++;
	}
	int r[n], j = 0;
	vector<int> k;
	for(int i=0; i<a.length(); i++)
	{
		if(a[i]=='0')
		{
			r[j] = i;
			j++;
			k.push_back(i);
		}
	}
	ret.push_back(make_pair(make_pair(8, n), k));
	if(a[0]=='0' && a[5]=='0' && a[4]=='0' && a[3]=='0' && a[6]=='0')
	{
		vector<int> i;
		for(int w=0; w<n; w++)
		{
			if(r[w]!=0 && r[w]!=5 && r[w]!=4 && r[w]!=3 && r[w]!=6) i.push_back(r[w]);
		}
		ret.push_back(make_pair(make_pair(1, n-5), i));
	}
	if(a[5]=='0' && a[2]=='0')
	{
		vector<int> i;
		for(int w=0; w<n; w++)
		{
			if(r[w]!=5 && r[w]!=2) i.push_back(r[w]);
		}
		ret.push_back(make_pair(make_pair(2, n-2), i));
	}
	if(a[1]=='0' && a[4]=='0')
	{
		vector<int> i;
		for(int w=0; w<n; w++)
		{
			if(r[w]!=1 && r[w]!=4) i.push_back(r[w]);
		}
		ret.push_back(make_pair(make_pair(5, n-2), i));
	}
	if(a[0]=='0' && a[4]=='0' && a[3]=='0')
	{
		vector<int> i;
		for(int w=0; w<n; w++)
		{
			if(r[w]!=0 && r[w]!=4 && r[w]!=3) i.push_back(r[w]);
		}
		ret.push_back(make_pair(make_pair(4, n-3), i));
	}
	if(a[1]=='0')
	{
		vector<int> i;
		for(int w=0; w<n; w++)
		{
			if(r[w]!=1) i.push_back(r[w]);
		}
		ret.push_back(make_pair(make_pair(6, n-1), i));
	}
	if(a[4]=='0')
	{
		vector<int> i;
		for(int w=0; w<n; w++)
		{
			if(r[w]!=4) i.push_back(r[w]);
		}
		ret.push_back(make_pair(make_pair(9, n-1), i));
	}
	if(a[6]=='0')
	{
		vector<int> i;
		for(int w=0; w<n; w++)
		{
			if(r[w]!=6) i.push_back(r[w]);
		}
		ret.push_back(make_pair(make_pair(0, n-1), i));
	}
	if(a[5]=='0' && a[4]=='0' && a[3]=='0' && a[6]=='0')
	{
		vector<int> i;
		for(int w=0; w<n; w++)
		{
			if(r[w]!=5 && r[w]!=4 && r[w]!=3 && r[w]!=6) i.push_back(r[w]);
		}
		ret.push_back(make_pair(make_pair(7, n-4), i));
	}
	if(a[5]=='0' && a[4]=='0')
	{
		vector<int> i;
		for(int w=0; w<n; w++)
		{
			if(r[w]!=5 && r[w]!=4) i.push_back(r[w]);
		}
		ret.push_back(make_pair(make_pair(3, n-2), i));
	}
	return ret;
}

string digit(int n, vector<int> v)
{
	string ret;
	switch(n)
	{
		case 0: ret = "1111110";
			break;
		case 1: ret = "0110000";
			break;
		case 2: ret = "1101101";
			break;
		case 3: ret = "1111001";
			break;
		case 4: ret = "0110011";
			break;
		case 5: ret = "1011011";
			break;
		case 6: ret = "1011111";
			break;
		case 7: ret = "1110000";
			break;
		case 8: ret = "1111111";
			break;
		case 9: ret = "1111011";
			break;
	}
	for(vector<int>::iterator it=v.begin(); it!=v.end(); it++) ret[*it] = '0';
	return ret;
}

bool isSub(vector<int> a, vector<int> b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    if(a.size()==b.size()) return ((includes(a.begin(), a.end(), b.begin(), b.end()) || includes(b.begin(), b.end(), a.begin(), a.end())) ? 1 : 0);
    else if(a.size()>=b.size()) return includes(a.begin(), a.end(), b.begin(), b.end());
	else return includes(b.begin(), b.end(), a.begin(), a.end());
}

int g(int n)
{
	if(n<0) return n+10;
	else return n;
}