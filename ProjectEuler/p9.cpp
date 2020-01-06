#include <bits/stdc++.h>

using namespace std;

int main()
{
	int ans = 0;
	for(int a=999; a>0; a--)
	{
		for(int b=999; b>0; b--)
		{
			for(int c=999; c>0; c--)
			{
				if(a+b+c==1000 && (a*a)+(b*b)==(c*c)) ans = max(ans, a*b*c);
			}
		}
	}
	cout<<ans<<endl;
}