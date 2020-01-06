#include <bits/stdc++.h>

using namespace std;

int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	int T;
	scanf("%d", &T);
	for(int tt=1; tt<=T; tt++)
	{
		int l, r;
		scanf("%d %d", &l, &r);
		char s[l+r];
		
		if(l==0 || r==0)
		{
			printf("0\n");
			continue;
		}
		else if(l==1 || r==1)
		{
			printf("1\n");
			continue;
		}
		
		for(int i=0; i<l; i++)
			s[i] = '(';
			
		for(int i=l; i<r+l; i++)
			s[i] = ')';
			
		printf("%s\n", s);
	}
}