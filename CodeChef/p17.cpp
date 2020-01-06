#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a1;
		cin>>a1;
		char a = a1[0];
		if(a=='B' || a=='b') cout<<"BattleShip"<<endl;
		else if(a=='C' || a=='c') cout<<"Cruiser"<<endl;
		else if(a=='D' || a=='d') cout<<"Destroyer"<<endl;
		else cout<<"Frigate"<<endl;
	}
	return 0;
}