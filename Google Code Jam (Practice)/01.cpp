#include <bits/stdc++.h>

using namespace std;

typedef struct words
{
	char word[20];
	int len;
}words;

int main()
{
	int l, d, n;
	scanf("%d %d %d", &l, &d, &n);
	words dlist[d];
	for(int i=0; i<d; i++)
	{
		scanf("%s", dlist[i].word);
		dlist[i].len = strlen(dlist[i].word);
	}
	for(int tt=0; tt<n; tt++)
	{
		char code[1000];
		scanf("%s", code);
		int len = strlen(code);
			
	}
}