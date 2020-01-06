#include <bits/stdc++.h>

using namespace std;

int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	
	int T;
	cin>>T;
	for(int tt=1; tt<=T; tt++)
	{
		cout<<"Case #"<<tt<<": ";
		
		double c, f, x, r = 2, t = 0;
		cin>>c>>f>>x;
		if(x<=c)
		{
			printf("%.7lf\n", x/2);
			continue;
		}
		while(true)
		{
			double a = t+(x/r), b, r1 = r+f;
			b = t+(c/r)+(x/r1);
			if(a<=b)
			{
				t += x/r;
				break;
			}
			else
			{
				t += c/r;
				r = r1;
			}
		}
		printf("%.7lf\n", t);
	}
}