#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

const int mx = 10000;

int main()
{
	FILE *out;
	out = fopen("A.out", "a");
	int T;
	scanf("%d", &T);
	for(int tt=1; tt<=T; tt++)
	{
		printf("Case #%d: ", tt);
		fprintf(out, "Case #%d: ", tt);
		int n;
		scanf("%d", &n);
		int a[mx], b[mx];
		for(int ti=0; ti<mx; ti++)
		{
			a[ti] = -1;
			b[ti] = -1;
		}
		int w = 0, ans = 0;
		for(int i=0; i<n; i++)
		{
			int a1, b1;
			scanf("%d %d", &a1, &b1);
			a[a1] = w;
			b[b1] = w;
			w++;
		}

		for(int i=0; i<mx; i++)
		{
			int a1, a2;
			a1 = i;
			if(a[i]!=-1/* && a[i]!=b[i]*/)
			{
				//find other ends of initial wire
				for(int f=0; f<mx; f++)
				{
					if(b[f]!=-1 && b[f]==a[i])
					{
						a2 = f;
						break;
					}
				}
				
				for(int j=i+1; j<mx; j++)
				{
					int b1, b2;
					if(a[j]!=-1)
					{
						b1 = j;
						//find other ends of test wires
						for(int f=0; f<mx; f++)
						{
							if(b[f]!=-1 && b[f]==a[j])
							{
								b2 = f;
								break;
							}
						}
						
						if((a1<b1 && b2<a2) || (a1>b1 && b2>a2))
						{
							ans++;
						}
					}
				}
			}
		}
		printf("%d\n", ans);
		fprintf(out, "%d\n", ans);
	}
}