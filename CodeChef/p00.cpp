#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
	char s[27];
	int n;
	scanf("%s %d", s, &n);
	for(int t=0; t<n; t++)
	{
		char w[15];
		scanf("%s", w);
		int known = 1;
		for(int i=0; i<15; i++)
		{
			if(w[i]<'a' || w[i]>'z')
				break;
				
			int exists = 0;
			for(int j=0; j<27; j++)
			{
				if(s[j]<'a' || s[j]>'z')
					break;
					
				if(w[i]==s[j])
				{
					exists = 1;
					break;
				}
			}
			if(!exists)
			{
				known = 0;
				break;
			}
		}
		printf("%s\n", (known) ? "Yes" : "No");
	}
	return 0;
}