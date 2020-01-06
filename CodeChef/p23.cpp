#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int h, s, n = 0;
		float cc;
		cin>>h>>cc>>s;
		bool a = 0, b = 0, c = 0;
		if(h>50) a = 1;
		if(cc<0.7) b = 1;
		if(s>5600) c = 1;
		if(a) n++;
		if(b) n++;
		if(c) n++;
		if(n==3) cout<<10<<endl;
		else if(!n) cout<<5<<endl;
		else if(n==1) cout<<6<<endl;
		else if(a && b && !c) cout<<9<<endl;
		else if(!a && b && c) cout<<8<<endl;
		else if(a && !b && c)  cout<<7<<endl;
	}
	return 0;
}