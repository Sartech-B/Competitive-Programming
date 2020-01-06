#include <bits/stdc++.h>

using namespace std;

int main()
{
	int ans;
	for(int i=1; i<1000; i++)
	{
		if(i%5==0 || i%3==0) ans += i;
	}
	cout<<ans<<endl;
}