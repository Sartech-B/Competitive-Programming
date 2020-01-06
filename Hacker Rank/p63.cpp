#include <bits/stdc++.h>

using namespace std;

int n;
string a[10];

string checkPassword(string);
string checkPassword2(string, int);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n;
		int m = n;
		for(int i=0; i<m; i++)
		{
			string tmp;
			cin>>tmp;
			string q = checkPassword(tmp);
			if(q=="WRONG PASSWORD") a[i] = tmp;
			else n--;
		}
		string loginPassword;
		cin>>loginPassword;
		for(int i=0; i<n; i++)
		{
			string q = checkPassword2(a[i], i);
			if(q!="WRONG PASSWORD") a[i] = "-";
		}
		cout<<checkPassword(loginPassword)<<endl;
	}
}

string checkPassword(string p)
{
	string tmp = "", tmp2 = "";
	for(int i=0; i<p.length(); i++)
	{
		tmp += p[i];
		for(int j=0; j<n; j++)
		{
			if(a[j]==tmp && a[j]!="-")
			{
				if(i==p.length()-1) return tmp;
				for(int k=i+1; k<p.length(); k++) tmp2 += p[k];
				string q = checkPassword(tmp2);
				if(q!="WRONG PASSWORD") return tmp+" "+q;
				else break;
			}
		}
	}
	return "WRONG PASSWORD";
}

string checkPassword2(string p, int s)
{
	string tmp = "", tmp2 = "";
	for(int i=0; i<p.length(); i++)
	{
		tmp += p[i];
		for(int j=0; j<n; j++)
		{
			if(a[j]==tmp && j!=s && a[j]!="-")
			{
				if(i==p.length()-1) return tmp;
				for(int k=i+1; k<p.length(); k++) tmp2 += p[k];
				string q = checkPassword(tmp2);
				if(q!="WRONG PASSWORD") return tmp+" "+q;
				else break;
			}
		}
	}
	return "WRONG PASSWORD";
}