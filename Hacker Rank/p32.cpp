#include <bits/stdc++.h>

using namespace std;

int main()
{
	int y;
	cin>>y;
	if(y<=1917)
	{
		if(y%4==0) cout<<"12.09."<<y<<endl;
		else cout<<"13.09."<<y<<endl;
	}
	else if(y==1918) cout<<"26.09."<<y<<endl;
	else
	{
		if(y%400==0 || (y%4==0 && y%100!=0)) cout<<"12.09."<<y<<endl;
		else cout<<"13.09."<<y<<endl;
	}
}