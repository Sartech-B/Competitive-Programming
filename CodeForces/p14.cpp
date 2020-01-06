#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	cin>>a;
	bool f = 0;
	char prev = a[0], cnt = 0;
	for(int i=0; i<a.length(); i++)
	{
		if(a[i]==prev) cnt++;
		else
		{
			if(cnt>=7)
			{
				f = 1;
				cout<<"YES"<<endl;
				break;
			}
			cnt = 1;
			prev = a[i];
		}
	}
	if(cnt>=7 && !f)
	{
		f = 1;
		cout<<"YES"<<endl;
	}
	if(!f) cout<<"NO"<<endl;
}