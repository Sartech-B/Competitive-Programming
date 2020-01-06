#include <bits/stdc++.h>

using namespace std;

bool match(char);

int main()
{
	string a;
	int n, ans = 4;
	cin>>n>>a;
	bool c[4] = {0, 0, 0, 0};
	for(int i=0; i<n; i++)
	{
		if(!c[0] && a[i]>='0' && a[i]<='9')
		{
			ans--;
			c[0] = 1;
		}
		else if(!c[1] && a[i]>='A' && a[i]<='Z')
		{
			ans--;
			c[1] = 1;
		}
		else if(!c[2] && a[i]>='a' && a[i]<='z')
		{
			ans--;
			c[2] = 1;
		}
		else if(!c[3] && match(a[i]))
		{
			ans--;
			c[3] = 1;
		}
	}
	if(n+ans<6) ans += 6-(ans+n);
	cout<<ans<<endl;
}

bool match(char a)
{
	string check = "!@#$%^&*()-+";
	for(int i=0; i<check.length(); i++)
	{
		if(check[i]==a) return 1;
	}
	return 0;
}