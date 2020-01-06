#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	int a;
	struct *l, *r;
}node;

node *root = NULL;

node *new_node(int);

int main()
{
	int r;
	cin>>r;
	root->a = r;
	root->l = NULL;
	root->r = NULL;
}

node *new_node(int a)
{
	node *tmp = (node *)malloc(sizeof(node));
	tmp->a = a;
	tmp->l = NULL;
	tmp->r = NULL;
	return tmp;
}