#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

#define REP(i, n) for(int i=0; i<n; i++)
#define REP1(i, n, a) for(int i=a; i<n; i++)

int main()
{
	FILE *out;
	out = fopen("D.out", "a");
	int T;
	cin>>T;
	REP(tt, T)
	{
		fprintf(out, "Case #%d: ", tt+1);
		long long unsigned int n, q, nn, p;
		cin>>n>>q;
		nn = n * (n + 1) / 2;
		long long unsigned int l[q], r[q], ans[q]; 
		int a[n], N[nn], temp;
		for(long long unsigned int i=0; i<n; i++)
		{
			cin>>a[i];
			N[i] = a[i];
		}
		REP(i, q)
		{
			cin>>l[i]>>r[i];
			ans[i] = 0;
		}
		p = n;
		if(n>1)
		{
			for(long long unsigned int i=2; i<=n; i++)
			{
				long long unsigned int ti = (n - i) + 1, sum = 0;
				for(long long unsigned int k=0; k<ti; k++)
				{
					for(long long unsigned int j=k; j<(k+i); j++)
					{
						sum += a[j];
					}
					N[p] = sum;
					sum = 0;
					p++;
				}
			}
		}
		for(long long unsigned int i=0; i<nn; i++)
		{
			for(long long unsigned int j=0; j<nn-1; j++)
			{
				if(N[j] > N[j+1])
				{
					temp = N[j];
					N[j] = N[j+1];
			 		N[j+1] = temp;
				}
			}
		}
		REP(i, q)
		{
			for(long long unsigned int j=(l[i]-1); j<r[i]; j++)
			{
				ans[i] += N[j]; 
			}
		}
		for(int i=0; i<q; i++)
		{
			cout<<endl<<ans[i];
			fprintf(out, "\n%lld", ans[i]);
		}
		fprintf(out, "\n");
	}
}