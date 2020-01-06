#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> v;
	while(n--)
	{
		int x;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(), v.end());
	while(1)
	{
		int q;
		cin>>q;
		int low = lower_bound(v.begin(), v.end(), q)-v.begin(), up = upper_bound(v.begin(), v.end(), q)-v.begin();
		cout<<q<<" -> "<<low<<"\t"<<up<<endl;
	}
}