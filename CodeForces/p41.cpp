#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	cin>>a;
	int h = (a[0]-'0')*10+(a[1]-'0'), m = (a[3]-'0')*10+(a[4]-'0');
	if(h==(m%10)*10+(a[3]-'0'))
	{
		cout<<0<<endl;
		return 0;
	}
	for(int i=1; i>=0; i++)
	{
		int cm = m+1;
		cm %= 60;
		if(cm<m) h++;
		h %= 24;
		m = cm;
		int d = cm%10;
		cm /= 10;
		if(h==d*10+cm)
		{
			cout<<i<<endl;
			break;
		}
	}
}