/*
ID: sarthak16
PROG: barn1
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	freopen("barn1.in", "r", stdin);
	freopen("barn1.out", "w", stdout);
	
	int m, s, c;
	cin>>m>>s>>c;
	
	int ci[c], a[c-1][2];
	
	for(int t=0; t<c; t++) cin>>ci[t];
	
	sort(ci, ci+c);
	
	if(m>c)
	{
		cout<<c<<endl;
		return 0;
	}
	
	if(!m)
	{
		cout<<0<<endl;
		return 0;
	}
	
	if(m==1)
	{
		cout<<ci[c-1]-ci[0]+1<<endl;
		return 0;
	}
	
	for(int i=1; i<c; i++)
	{
		a[i-1][0] = ci[i]-ci[i-1];
		a[i-1][1] = i;
	}
	
	for(int i=0; i<c-2; i++)
	{
		for(int j=i+1; j<c-1; j++)
		{
			if(a[i][0]<a[j][0])
			{
				int tmp = a[i][0], tmp2 = a[i][1];
				a[i][0] = a[j][0];
				a[i][1] = a[j][1];
				a[j][0] = tmp;
				a[j][1] = tmp2;
			}
		}
	}
	
	int b[m-1][2];
	for(int i=0; i<m-1; i++)
	{
		b[i][0] = a[i][0];
		b[i][1] = a[i][1];
	}
	
	for(int i=0; i<m-2; i++)
	{
		for(int j=i+1; j<m-1; j++)
		{
			if(b[i][1]>b[j][1])
			{
				int tmp = b[i][0], tmp2 = b[i][1];
				b[i][0] = b[j][0];
				b[i][1] = b[j][1];
				b[j][0] = tmp;
				b[j][1] = tmp2;
			}
		}
	}
	
	int ans = ci[b[0][1]-1]-ci[0]+1;
	
	for(int i=1; i<m-1; i++) ans += ci[b[i][1]-1]-ci[b[i-1][1]]+1;
	
	ans += ci[c-1]-ci[b[m-2][1]]+1;
	
	cout<<ans<<endl;
	
	return 0;
}
