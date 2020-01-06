#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

#define true 1
#define false 0

typedef struct node
{
	int data;
	struct node *next;
}node;

node *head;

void traverse(node *);

int main()
{
	node *ptr, *cpt;
	
	ptr = (node *)malloc(sizeof(node));
	
	scanf("%d", &ptr->data);
	ptr->next = NULL;
	head = ptr;
	while(true)
	{
		int bool = true;
		char a[50];
		cpt = (node *)malloc(sizeof(node));
		cpt->data = 0;
		scanf("%s", &a);
		int len = strlen(a);
		for(int i=0; i<len; i++)
		{
			if(a[i]<'0' || a[i]>'9')
			{
				bool = false;
			}
		}
		if(!bool)
			break;
		else
		{
			for(int i=0; i<len; i++)
			{
				cpt->data += ((int)(a[i]-'0') * (int)pow(10, len-(i+1)));
			}
		}
		cpt->next = NULL;
		ptr->next = cpt;
		ptr = cpt;
	}
	traverse(head);
}

void traverse(node *ptr)
{
	if(ptr==NULL)
		return;
		
	traverse(ptr->next);
	printf("%d\n", ptr->data);
}