#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin>>s;
	int n = s.length();
	if(n==1)
	{
		if(s[0]=='0')
		{
			cout<<1<<endl;
			return 0;
		}
		int tmp = (s[0]-'0')%4;
		if(!tmp) tmp = 4;
		switch(tmp)
		{
			case 1:
				cout<<8<<endl;
				break;
			case 2:
				cout<<4<<endl;
				break;
			case 3:
				cout<<2<<endl;
				break;
			case 4:
				cout<<6<<endl;
				break;
		}
		return 0;
	}
	int a = s[n-2]-'0', b = s[n-1]-'0';
	if(a%2==0)
	{
		switch(b)
		{
			case 0: case 4: case 8:
				cout<<6<<endl;
				break;
			case 3: case 7:
				cout<<2<<endl;
				break;
			case 2: case 6:
				cout<<4<<endl;
				break;
			case 1: case 5: case 9:
				cout<<8<<endl;
				break;
		}
	}
	else
	{
		switch(b)
		{
			case 2: case 6:
				cout<<6<<endl;
				break;
			case 9: case 1: case 5:
				cout<<2<<endl;
				break;
			case 8: case 0: case 4:
				cout<<4<<endl;
				break;
			case 7: case 3:
				cout<<8<<endl;
				break;
		}
	}
}