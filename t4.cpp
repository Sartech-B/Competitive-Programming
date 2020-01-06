#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, x, y;
	cin>>n>>x>>y;
	int t[n][2], v[x], w[y];
	for(int i=0; i<n; i++) cin>>t[i][0]>>t[i][1];
	for(int i=0; i<x; i++) cin>>v[i];
	for(int i=0; i<y; i++) cin>>w[i];
	sort(v, v+x);
	sort(w, w+y);
	int ans = 1000001;
	for(int i=0; i<n; i++)
	{
		int index = v[upper_bound(v, v+x, t[i][0])-v-1], index2 = *lower_bound(w, w+y, t[i][1]);
		if(index==0 || index2==0) continue;
		ans = min(ans, index2-index+1);
	}
	cout<<ans;
	return 0;
}