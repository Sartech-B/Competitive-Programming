#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a[4], b[4];
		int s = 0;
		for(int i=0; i<4; i++) cin>>a[i];
		for(int i=0; i<4; i++) cin>>b[i];
		for(int i=0; i<4; i++)
		{
			for(int j=0; j<4; j++)
			{
				if(a[i]==b[j]) s++;
			}
		}
		if(s>1) cout<<"similar"<<endl;
		else cout<<"dissimilar"<<endl;
	}
	return 0;
}