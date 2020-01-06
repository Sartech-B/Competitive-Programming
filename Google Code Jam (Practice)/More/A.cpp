#include <bits/stdc++.h>

using namespace std;

#define REP(i, n) for(int i=0; i<n; i++)
#define MOD 1000000007;

int distn(char, char);
int distn1(char, char, char);

int main()
{
	FILE *out;
	out = fopen("A.out", "a");
	int T;
	cin>>T;
	REP(tt, T)
	{
		fprintf(out, "Case #%d: ", tt+1);
		char S[1005];
		cin>>S;
		int n = strlen(S);
		int p[n];
		long long unsigned int ans = 1, temp = 1;
		REP(i, n)
		{
			p[i] = n==1 ? 1 : ( ( i>0 && i<(n-1) ) ? distn1(S[i], S[i-1], S[i+1]) : ( (i>0) ? distn(S[i], S[i-1]) : distn(S[i], S[i+1])) );
			temp = temp * p[i] % MOD;
		}
		ans = ans * temp % MOD;
		cout<<ans<<endl;
		fprintf(out, "%llu\n", ans);
	}
}

int distn(char a, char b)
{
	return a==b ? 1 : 2;
}

int distn1(char a, char b, char c)
{
	if( (a==b && b!=c) || (b==c && c!=a) || (c==a && a!=b) ) return 2;
	if(a==b && b==c) return 1;
	return 3;
}