#include <bits/stdc++.h>

using namespace std;

string key, def = "MBJ_Ab{;]=Sz<x}h3'!RI,&\\qHGkFE6pf(c$ZD@Q#oONYedTU8>4VjvP-2s.75i:9^[W|Xy?01t\"LC) ag`l+/*unrmwK~";
map<char, char> cipher, decipher;

void enc();
void dec();

int main()
{
	//random_shuffle(def.begin(), def.end());
	//cout<<def<<endl;
	key = "#key=x.squar+b";
	string def1 = key;
	for(int i=0; i<def.length(); i++)
	{
		bool f = 0;
		for(int j=0; j<key.length(); j++)
		{
			if(key[j]==def[i])
			{
				f = 1;
				break;
			}
		}
		if(!f) def1 += def[i];
	}
	for(int i=0; i<def1.length(); i++)
	{
		cipher[def1[i]] = def[i];
		decipher[def[i]] = def1[i];
	}
	enc();
	dec();
}

void enc()
{
	string a;
	getline(cin, a);
	for(int i=0; i<a.length(); i++) a[i] = cipher[a[i]];
	cout<<a<<endl;
}

void dec()
{
	string a;
	getline(cin, a);
	for(int i=0; i<a.length(); i++) a[i] = decipher[a[i]];
	cout<<a<<endl;
}