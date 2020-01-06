#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	cin>>a;
	int n = a.length(), tmp;
	tmp = n;
	while(tmp--)
	{
		for(int i=0; i<n-1; i++)
		{
			if(a[i]==a[i+1] && a[i]!='-')
			{
				int j = i-1, k = i+2;
				a[i] = a[i+1] = '-';
				while(j>=0 && k<n)
				{
					if(a[j]==a[k] && a[j]!='-') a[j] = a[k] = '-';
					else break;
					j--;
					k++;
				}
				i = k-1;
			}
		}
		string cur = "";
		for(int i=0; i<n; i++)
		{
			if(a[i]!='-') cur += a[i];
		}
		a = cur;
		n = a.length();
	}
	if(!n) cout<<"Empty String"<<endl;
	else cout<<a<<endl;
}