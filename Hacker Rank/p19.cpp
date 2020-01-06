#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	getline(cin, a);
	int n = a.length();
	if(n<26)
	{
		cout<<"not pangram"<<endl;
		return 0;
	}
	int cnt[26];
	for(int i=0; i<26; i++) cnt[i] = 0;
	int ans = 0;
	for(int i=0; i<n; i++)
	{
		if(a[i]>='a' && a[i]<='z')
		{
			if(!cnt[a[i]-'a']) ans++;
			cnt[a[i]-'a']++;
		}
		else if(a[i]>='A' && a[i]<='Z')
		{
			if(!cnt[a[i]-'A']) ans++;
			cnt[a[i]-'A']++;
		}
	}
	if(ans<26) cout<<"not pangram"<<endl;
	else cout<<"pangram"<<endl;
}