#include <bits/stdc++.h>
 
using namespace std;
 
struct node
{
	node *a[26];
	int type;
	bool end;
};
 
vector<string> ans;
 
node *new_node();
void insert(node *, string, char);
int dfs(node *, string, int);
 
int main()
{
	node *root = new_node();
	int n, cnt = 0;
	cin>>n;
	for(int i=0; i<n; i++)
	{
		char ch;
		string a;
		cin>>ch>>a;
		if(ch=='-') cnt++;
		insert(root, a, ch);
	}
	if(!cnt)
	{
		cout<<0<<endl;
		return 0;
	}
	else if(cnt==n)
	{
		node *tmp = root;
		for(int i=0; i<26; i++)
		{
			if(tmp->a[i]!=NULL)
			{
				string tmp = "";
				tmp += i+'a';
				ans.push_back(tmp);
			}
		}
		cout<<ans.size()<<endl;
		for(int i=0; i<ans.size(); i++) cout<<ans[i]<<endl;
		return 0;
	}
	bool f = 1;
	for(int i=0; i<26; i++)
	{
		if(root->a[i]!=NULL)
		{
			string tmp = "";
			tmp += i+'a';
			if(!dfs(root->a[i], tmp, -1))
			{
				cout<<-1<<endl;
				f = 0;
				break;
			}
		}
	}
	if(f)
	{
		sort(ans.begin(), ans.end());
		cout<<ans.size()<<endl;
		for(int i=0; i<ans.size(); i++) cout<<ans[i]<<endl;
	}
}
 
node *new_node()
{
	node *tmp = (node *)malloc(sizeof(node));
	for(int i=0; i<26; i++) tmp->a[i] = NULL;
	tmp->type = 0;
	tmp->end = 0;
	return tmp;
}
 
void insert(node *root, string a, char ch)
{
	node *tmp = root;
	for(int i=0; i<a.length(); i++)
	{
		if(tmp->a[a[i]-'a']!=NULL)
		{
			tmp = tmp->a[a[i]-'a'];
			if(tmp->type!=(ch=='-' ? 0 : 1)) tmp->type = 2;
		}
		else
		{
			tmp->a[a[i]-'a'] = new_node();
			tmp = tmp->a[a[i]-'a'];
			if(ch=='+') tmp->type++;
			if(i==a.length()-1) tmp->end = 1;
		}
	}
}
 
int dfs(node *curr, string a, int type)
{
	if(curr->type==0)
	{
		ans.push_back(a);
		return 1;
	}
	else if(curr->type==1)
	{
		if(type==-1) return 1;
		else if(type==2) return 0;
	}
	else if(curr->type==2 && curr->end) return 0;
	bool f = 0;
	for(int i=0; i<26; i++)
	{
		if(curr->a[i]!=NULL)
		{
			string tmp = a;
			tmp += i+'a';
			if(dfs(curr->a[i], tmp, curr->type)) f = 1;
		}
	}
	if(!f) return 0;
	return 1;
}