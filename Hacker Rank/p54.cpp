#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<string> a;
	for(int i=0; i<n; i++)
	{
		string t;
		cin>>t;
		a.push_back(t);
	}
	int mx, my, px, py;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(a[i][j]=='m')
			{
				mx = i;
				my = j;
			}
			else if(a[i][j]=='p')
			{
				px = i;
				py = j;
			}
		}
	}
	int x = mx-px, y = my-py;
	string c1 = (x<0 ? "DOWN" : "UP"), c2 = (y<0 ? "RIGHT" : "LEFT");
	for(int i=0; i<abs(x); i++) cout<<c1<<endl;
	for(int i=0; i<abs(y); i++) cout<<c2<<endl;
}