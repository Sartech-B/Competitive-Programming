#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x, y, z;
		cin>>x>>y>>z;
		int dist1 = abs(x-z), dist2 = abs(y-z);
		if(dist1==dist2) cout<<"Mouse C"<<endl;
		else cout<<"Cat "<<(dist1<dist2 ? "A" : "B")<<endl;
	}
}