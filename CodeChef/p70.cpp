#include <bits/stdc++.h>

using namespace std;

struct node
{
	node *a[26];
	int mn, mx;
};

node *new_node();
void insert(node *, string, int);

int main()
{
	node *root = new_node();
	int n;
	cin>>n;
	string s[n];
	for(int i=0; i<n; i++)
	{
		cin>>s[i];
		insert(root, s[i], i);
	}
	int q;
	cin>>q;
	while(q--)
	{
		int r;
		string p;
		cin>>r>>p;
		r--;
		node *tmp = root;
		int k = 0;
		while(tmp!=NULL)
		{
			if(k<p.length() && tmp->a[p[k]-'a']!=NULL)
			{
				if(tmp->a[p[k]-'a']->mn<=r)
				{
					tmp = tmp->a[p[k]-'a'];
					k++;
				}
				else
				{
					vector<string> ans;
					if(tmp->mn==-1 || tmp->mx==-1)
					{
						sort(s, s+n);
						cout<<s[0]<<endl;
						break;
					}
					for(int i=tmp->mn; i<=min(tmp->mx, r); i++) ans.push_back(s[i]);
					sort(ans.begin(), ans.end());
					cout<<ans[0]<<endl;
					break;
				}
			}
			else
			{
				vector<string> ans;
				if(tmp->mn==-1 || tmp->mx==-1)
				{
					sort(s, s+n);
					cout<<s[0]<<endl;
					break;
				}
				for(int i=tmp->mn; i<=min(tmp->mx, r); i++) ans.push_back(s[i]);
				sort(ans.begin(), ans.end());
				cout<<ans[0]<<endl;
				break;
			}
		}
	}
}

void insert(node *root, string a, int i)
{
	int k = 0;
	node *tmp = root;
	while(tmp!=NULL && k<a.length())
	{
		if(tmp->a[a[k]-'a']==NULL)
		{
			tmp->a[a[k]-'a'] = new_node();
			tmp = tmp->a[a[k]-'a'];
			if(tmp->mn==-1)
			{
				tmp->mn = i;
				tmp->mx = i;
			}
			else
			{
				tmp->mn = min(tmp->mn, i);
				tmp->mx = max(tmp->mx, i);
			}
			k++;
		}
		else
		{
			tmp = tmp->a[a[k]-'a'];
			if(tmp->mn==-1)
			{
				tmp->mn = i;
				tmp->mx = i;
			}
			else
			{
				tmp->mn = min(tmp->mn, i);
				tmp->mx = max(tmp->mx, i);
			}
			k++;
		}
	}
}

node *new_node()
{
	node *tmp = (node *)malloc(sizeof(node));
	for(int i=0; i<26; i++) tmp->a[i] = NULL;
	tmp->mn = -1;
	tmp->mx = -1;
	return tmp;
}