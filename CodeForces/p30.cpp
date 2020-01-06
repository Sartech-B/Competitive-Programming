#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	cin>>a;
	bool vis[1000];
	for(int i=0; i<1000; i++) vis[i] = 0;
	int n = 0;
	for(int i=0; i<a.length(); i++)
	{
		if(!vis[a[i]])
		{
			n++;
			vis[a[i]] = 1;
		}
	}
	if(n%2==0) cout<<"CHAT WITH HER!"<<endl;
	else cout<<"IGNORE HIM!"<<endl;
}