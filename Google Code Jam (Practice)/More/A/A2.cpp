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
		printf("Case #%d: ", tt);
		int a1, a2, arr[4][4], arrf[4][4], tmp[4], p = 0, ans;
		scanf("%d", &a1);
		a1--;
		for(int t=0; t<4; t++)
		{
			for(int k=0; k<4; k++)
				scanf("%d", &arr[t][k]);
		}
		for(int i=0; i<4; i++)
		{
			tmp[i] = arr[a1][i];
		}
		
		scanf("%d", &a2);
		a2--;
		for(int t=0; t<4; t++)
		{
			for(int k=0; k<4; k++)
				scanf("%d", &arrf[t][k]);
		}
		
		for(int i=0; i<4; i++)
		{
			for(int k=0; k<4; k++)
			{
				if(tmp[k]==arrf[a2][i])
				{
					p++;
					ans = arrf[a2][i];
				}
			}
		}
		if(p==1)
			printf("%d", ans);
		else
			printf("%s", (p==0) ? "Volunteer cheated!" : "Bad magician!");
			
		printf("\n");
	}
}