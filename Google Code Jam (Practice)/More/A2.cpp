#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

long long rev(long long);

int main()
{
	FILE *out;
	out = fopen("A.out", "a");
	int T;
	cin>>T;
	for(int tt=1; tt<=T; tt++)
	{
		printf("Case #%d: ", tt);
		fprintf(out, "Case #%d: ", tt);
		long long n, ans = 0;
		cin>>n;
		for(long long i=1; i<=n; i++)
		{
			long long temp = rev(i);
			if(temp>i && temp<=n)
			{
				i = temp-1;
				
				//ans++;
			}
			ans++;
		}
		cout<<ans<<endl;
		fprintf(out, "%lld\n", ans);
	}
	getch();
}

long long rev(long long i)
{
	cout<<endl<<"REVERSE OF "<<i;
	long long temp = 0;
	while(i!=0)
	{
		temp *= 10;
		temp += i%10;
		i /= 10;
	}
	cout<<" IS ::: "<<temp<<endl;
	getch();
	return temp;
}
















