#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[2*n];
	    for(int i=0; i<2*n; i++) cin>>a[i];
	    sort(a, a+2*n);
	    int p = (3*n-1)/2;
	    cout<<a[p]<<endl;
	    swap(a[p], a[n]);
	    for(int i=0; i<2*n-1; i++) cout<<a[i]<<" ";
	    cout<<a[2*n-1]<<endl;
	}
}