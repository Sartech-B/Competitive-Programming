#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str, tmp = "";
		cin>>str;
		vector<long long int> a[2];
		for(int i=0; i<str.length(); i++)
		{
			tmp += str[i];
			if(tmp=="rei")
			{
				a[0].push_back(0);
				tmp = "";
			}
			else if(tmp=="ichi")
			{
				a[0].push_back(1);
				tmp = "";
			}
			else if(tmp=="ni")
			{
				a[0].push_back(2);
				tmp = "";
			}
			else if(tmp=="san")
			{
				a[0].push_back(3);
				tmp = "";
			}
			else if(tmp=="yon")
			{
				a[0].push_back(4);
				tmp = "";
			}
			else if(tmp=="go")
			{
				a[0].push_back(5);
				tmp = "";
			}
			else if(tmp=="roku")
			{
				a[0].push_back(6);
				tmp = "";
			}
			else if(tmp=="nana")
			{
				a[0].push_back(7);
				tmp = "";
			}
			else if(tmp=="hachi")
			{
				a[0].push_back(8);
				tmp = "";
			}
			else if(tmp=="hyakkei")
			{
				a[0].push_back(1000000000000000000);
				tmp = "";
			}
			else if(tmp=="jukkei")
			{
				a[0].push_back(100000000000000000);
				tmp = "";
			}
			else if(tmp=="jutcho")
			{
				a[0].push_back(10000000000000);
				tmp = "";
			}
			else if(tmp=="hakkei")
			{
				a[0].push_back(80000000000000000);
				tmp = "";
			}
			else if(tmp=="hatcho")
			{
				a[0].push_back(8000000000000);
				tmp = "";
			}
			else if(tmp=="hassen")
			{
				a[0].push_back(8000);
				tmp = "";
			}
			else if(tmp=="happyaku")
			{
				a[0].push_back(800);
				tmp = "";
			}
			else if(tmp=="kyu")
			{
				a[0].push_back(9);
				tmp = "";
			}
			else if(tmp=="juu")
			{
				a[0].push_back(10);
				tmp = "";
			}
			else if(tmp=="hyaku")
			{
				a[0].push_back(100);
				tmp = "";
			}
			else if(tmp=="sen" || tmp=="issen")
			{
				a[0].push_back(1000);
				tmp = "";
			}
			else if(tmp=="man")
			{
				a[0].push_back(10000);
				tmp = "";
			}
			else if(tmp=="oku")
			{
				a[0].push_back(100000000);
				tmp = "";
			}
			else if(tmp=="itcho" || tmp=="cho")
			{
				a[0].push_back(1000000000000);
				tmp = "";
			}
			else if(tmp=="ikkei" || tmp=="kei")
			{
				a[0].push_back(10000000000000000);
				tmp = "";
			}
			else if(tmp=="rokkei")
			{
				a[0].push_back(60000000000000000);
				tmp = "";
			}
			else if(tmp=="roppyaku")
			{
				a[0].push_back(600);
				tmp = "";
			}
			else if(tmp=="sanbyaku")
			{
				a[0].push_back(300);
				tmp = "";
			}
			else if(tmp=="sanzen")
			{
				a[0].push_back(3000);
				tmp = "";
			}
		}
		for(int i=0; i<a[0].size(); i++)
		{
			if(i+1<a[0].size() && a[0][i]<a[0][i+1])
			{
				a[1].push_back(a[0][i]*a[0][i+1]);
				i++;
			}
			else a[1].push_back(a[0][i]);
		}
		long long int ans = 0;
		for(int i=0; i<a[1].size(); i++) ans += a[1][i];
		cout<<ans<<endl;
	}
}