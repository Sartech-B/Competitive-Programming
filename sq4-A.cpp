/* Graph */
#include <bits/stdc++.h>

using namespace std;

typedef struct node
{
	int v;
	struct node *next;
}node;

node *graph[10];

int *visited;
int n;

void bfs(int);
void dfs(int);

int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	int n1, e;
	cin>>n1>>e;
	n = n1;
	visited = (int *)malloc(n*sizeof(int));
	for(int i=0; i<n; i++) visited[i] = 0;
	for(int i=0; i<n; i++) graph[i] = NULL;
	while(e--)
	{
		int u, v;
		cin>>u>>v;
		node *ptr = (node *)malloc(sizeof(node)), *tmp;
		tmp = graph[u];
		ptr->v = v;
		ptr->next = NULL;
		if(tmp==NULL) graph[u] = ptr;
		else
		{
			while(tmp->next!=NULL) tmp = tmp->next;
			tmp->next = ptr;
		}
	}
	cout<<"\n\nBFS:\n\n\n";
	bfs(0);
	for(int i=0; i<n; i++) visited[i] = 0;
	cout<<"\n\nDFS:\n\n\n";
	dfs(0);
	return 0;
}

void bfs(int u)
{
	queue<int> q;
	q.push(u);
	visited[u] =  1;
	while(!q.empty())
	{
		u = q.front();
		cout<<u<<endl;
		q.pop();
		node *ptr = graph[u];
		while(ptr!=NULL)
		{
			if(!visited[ptr->v])
			{
				q.push(ptr->v);
				visited[ptr->v] = 1;
			}
			ptr = ptr->next;
		}
	}
}

void dfs(int u)
{
	visited[u] = 1;
	cout<<u<<endl;
	node *ptr = graph[u];
	while(ptr!=NULL)
	{
		if(!visited[ptr->v]) dfs(ptr->v);
		ptr = ptr->next;
	}
}