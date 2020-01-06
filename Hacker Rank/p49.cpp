#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, k, ans = 0;
	cin>>n>>k;
	vector<int> a;
	for(int i=0; i<n; i++)
	{
		int l, t;
		cin>>l>>t;
		ans += l;
		if(t) a.push_back(l);
	}
	sort(a.begin(), a.end());
	for(int i=0; i<a.size()-(k<a.size() ? k : a.size()); i++) ans -= a[i]*2;
	cout<<ans<<endl;
}