#include <bits/stdc++.h>

using namespace std;

bool f(char);

int main()
{
	string a;
	cin>>a;
	for(int i=0; i<a.length(); i++)
	{
		if(a[i]>='A' && a[i]<='Z') a[i] += 'a'-'A';
		if(f(a[i])) continue;
		else cout<<".";
		cout<<a[i];
	}
	cout<<endl;
}

bool f(char a)
{
	if(a=='a' || a=='o' || a=='y' || a=='e' || a=='u' || a=='i') return 1;
	else return 0;
}