#include <bits/stdc++.h>

using namespace std;

int main(){
	string a;
	cin>>a;
	long int ans = 0;
	for(int i=0; i<a.length()-12; i++)
	{
		long int tmp = 1;
		for(int j=i; j<13+i; j++) tmp *= (int)(a[j] - '0');
		ans = max(ans, tmp);
		tmp = 1;
	}
	cout<<ans<<endl;
}