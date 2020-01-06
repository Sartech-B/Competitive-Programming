#include <bits/stdc++.h>

using namespace std;

typedef struct node1
{
	string name;
	struct node1 *next;
}edge;

typedef struct node
{
	string name;
	struct node *next;
	struct node1 *adj;
}vertex;

int main()
{
	//freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	int T;
	cin>>T;
	for(int tt=1; tt<=T; tt++)
	{
		printf("Case #%d: ", tt);
		vertex *graph;
		graph = (vertex *)malloc(sizeof(vertex));
		graph->name = "";
		graph->next = NULL;
		graph->adj = NULL;
		int n, m;
		cin>>n>>m;
		for(int i=0; i<n; i++)
		{
			string path;
			cin>>path;
			vertex *cmp;
			string dir = "", prev = "";
			for(int j=1; j<path.length(); j++)
			{
				for(int a=j; a<path.length(); a++)
				{
					if(path[a]=='/')
					{
						j = a;
						break;
					}
					dir += path[a];
				}
				if(prev=="")
				{
					vertex *ptr = graph;
					int f = 0;
					if(ptr->name!="")
					{
						while(ptr!=NULL)
						{
							if(dir.compare(ptr->name)==0)
							{
								f = 1;
								break;
							}
							if(ptr->next==NULL) cmp = ptr;
							ptr = ptr->next;
						}
					}
					else cmp = ptr;
					if(!f)
					{
						vertex *tmp = (vertex *)malloc(sizeof(vertex));
						tmp->name = dir;
						tmp->next = NULL;
						tmp->adj = NULL;
						if(cmp->name=="") cmp = tmp;
						else cmp->next = tmp;
					}
					
					prev = dir;
					dir = "";
				}
				else
				{
					vertex *ptr = graph, *tmp = graph;
					int f = 0;
					while(ptr!=NULL)
					{
						if(dir.compare(ptr->name)==0)
						{
							f = 1;
							break;
						}
						if(ptr->next==NULL) cmp = ptr;
						ptr = ptr->next;
					}
					if(!f)
					{
						vertex *tmp = (vertex *)malloc(sizeof(vertex));
						tmp->name = dir;
						tmp->next = NULL;
						tmp->adj = NULL;
						cmp->next = tmp;
					}
					while(tmp!=NULL)
					{
						if(prev.compare(tmp->name)==0)
						{
							edge *ptr1 = tmp->adj, *cmp;
							if(ptr1==NULL)
							{
								edge *tmp1 = (edge *)malloc(sizeof(edge));
								tmp1->name = dir;
								tmp1->next = NULL;
								tmp->adj = tmp1;
							}
							else
							{
								while(ptr1!=NULL)
								{
									if(ptr1->next==NULL) cmp = ptr1;
									ptr1 = ptr1->next;
								}
								edge *tmp1 = (edge *)malloc(sizeof(edge));
								tmp1->name = dir;
								tmp1->next = NULL;
								cmp->next = tmp1;
							}
							break;
						}
						tmp = tmp->next;
					}
					prev = dir;
					dir = "";
				}
			}
		}
		int ans = 0;
		for(int i=0; i<m; i++)
		{
			string path;
			cin>>path;
			string dir = "", prev = "";
			vertex *prev_ptr;
			for(int j=1; j<path.length(); j++)
			{
				for(int a=j; a<path.length(); a++)
				{
					if(path[a]=='/')
					{
						j = a;
						break;
					}
					dir += path[a];
				}
				if(prev=="")
				{
					vertex *ptr = graph, *cmp;
					int f = 0;
					if(ptr->name=="") cmp = ptr;
					else
					{
						while(ptr!=NULL)
						{
							if(dir.compare(ptr->name)==0)
							{
								cmp = ptr;
								f = 1;
								break;
							}
							if(ptr->next==NULL) cmp = ptr;
							ptr = ptr->next;
						}
					}
					if(f) prev_ptr->next = cmp;
					else
					{
						vertex *tmp = (vertex *)malloc(sizeof(vertex));
						tmp->name = dir;
						tmp->next = NULL;
						tmp->adj = NULL;
						if(cmp->name=="") cmp = tmp;
						else cmp->next = tmp;
						ans++;
						prev_ptr = tmp;
					}
				}
				else
				{
					vertex *ptr = graph, *tmp2;
					int f = 0;
					while(ptr!=NULL)
					{
						if(dir.compare(ptr->name))
						{
							f = 1;
							break;
						}
						if(ptr->next=NULL) tmp2 = ptr;
						ptr = ptr->next;
					}
					
					if(!f)
					{
						vertex *tmp3 = (vertex *)malloc(sizeof(vertex));
						tmp3->name = dir;
						tmp3->next = NULL;
						tmp3->adj = NULL;
						tmp2->next = tmp3;
					}
					edge *tmp = prev_ptr->adj;
					if(tmp==NULL && !f)
					{
						edge *tmp1 = (edge *)malloc(sizeof(edge));
						tmp1->name = dir;
						tmp1->next = NULL;
						prev_ptr->adj = tmp1;
						ans++;
					}
					else if(!f)
					{
						while(tmp!=NULL)
						{
							if(tmp->next==NULL)
							{
								edge *tmp4 = (edge *)malloc(sizeof(edge));
								tmp4->name = dir;
								tmp4->next = NULL;
								tmp->next = tmp4;
								ans++;
								break;
							}
							tmp = tmp->next;
						}
					}
					prev = dir;
					dir = "";
				}
			}
		}
		cout<<ans<<endl;
	}
	return 0;
}