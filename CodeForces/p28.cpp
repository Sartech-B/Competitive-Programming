#include <bits/stdc++.h>

using namespace std;

int main()
{
	int r, c;
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			int v;
			cin>>v;
			if(v)
			{
				r = i+1;
				c = j+1;
			}
		}
	}
	cout<<abs(3-c)+abs(3-r)<<endl;
}