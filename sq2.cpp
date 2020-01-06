/* Merge-Sort */
#include <bits/stdc++.h>

using namespace std;

int a[100001];

void msort(int, int, int);
void mmerge(int, int, int);

int main()
{
	int n;
	cin>>n;
	for(int i=0; i<n; i++) cin>>a[i];
	msort(0, (n/2)-1, n-1);
	for(int i=0; i<n; i++) cout<<a[i]<<endl;
	return 0;
}

void msort(int p, int q, int r)
{
	if(p==q && q==r) return;
	msort(p, ((p+q)/2), q);
	msort(q+1, ((q+r+1)/2), r);
	mmerge(p, q, r);
}

void mmerge(int p, int q, int r)
{
	int l[q-p+2], ri[r-q+1];
	for(int i=0; i<q-p+1; i++) l[i] = a[p+i];
	for(int j=0; j<r-q; j++) ri[j] = a[q+j+1];
	l[q-p+1] = 1000001;
	ri[r-q] = 1000001;
	int i = 0, j = 0;
	for(int k=p; k<=r; k++)
	{
		if(l[i]<ri[j])
		{
			a[k] = l[i];
			i++;
		}
		else
		{
			a[k] = ri[j];
			j++;
		}
	}
}