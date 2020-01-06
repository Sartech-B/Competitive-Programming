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
		char dom[101];
		scanf("%s", dom);
		printf("Case #%d: %s is ruled by ", tt, dom);
		int len = strlen(dom);
		if(dom[len-1]=='y' || dom[len-1]=='Y')
			printf("nobody");
		else if(dom[len-1]=='a' || dom[len-1]=='e' || dom[len-1]=='i' || dom[len-1]=='o' || dom[len-1]=='u' || dom[len-1]=='A' || dom[len-1]=='E' || dom[len-1]=='I' || dom[len-1]=='O' || dom[len-1]=='U')
			printf("a queen");
		else
			printf("a king");
			
		printf(".\n");
	}
}