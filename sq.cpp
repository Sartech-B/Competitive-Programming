/* Sartech/Alternating Sequence */
#include <bits/stdc++.h>
#include <conio.h>

#define MAX 68

using namespace std;

typedef long long int ll;

int main()
{
	ll a[MAX+1];
	int t;
	a[2] = 1;
	for(ll i=3; i<=MAX; i++)
	{
	
	
	
	
		/*Formulae*/a[i] = (0-i) * a[i-1] + i*i;
		
		
		
		
		cout<<i-2<<". "<<a[i]<<endl;
		getch();
	}
	cout<<"End"<<endl;
	cin>>t;
	return 0;
}