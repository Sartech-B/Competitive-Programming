#include <bits/stdc++.h>
#include "cs50.h"

using namespace std;

typedef struct songtemp
{
	string name;
	int len;
}songs;

int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	int T;
	scanf("%d", &T);
	for(int tt=1; tt<=T; tt++)
	{
		printf("Case #%d: ", tt);
		int n;
		scanf("%d", &n);
		songs col[n];
		for(int t=0; t<n; t++)
		{
			col[t].name = GetString();
			//col[t].len = col[t].name.length();
			//con to small caps
			for(int i=0; i<col[t].len; i++)
			{
				if(col[t].name[i]>='A' && col[t].name[i]<='Z')
				{
					//char ch = col[t].name.at(i) + 'a' - 'A';
					//col[t].name[i] = ch;
				}
			}
			/*Testing*/printf("%s\n", col[t].name);
		}
	}
}