#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		double r;
		int x1, x2, x3, y1, y2, y3;
		cin>>r>>x1>>y1>>x2>>y2>>x3>>y3;
		double a, b, c;
		int s = 0;
		a = sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
		b = sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
		c = sqrt((x3-x1)*(x3-x1)+(y3-y1)*(y3-y1));
		if(a<=r) s++;
		if(b<=r) s++;
		if(c<=r) s++;
		if(s>=2) cout<<"yes"<<endl;
		else cout<<"no"<<endl;
	}
	return 0;
}