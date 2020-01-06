/* Stack */
#include <bits/stdc++.h>

#define MAX 100001

using namespace std;

int a[MAX], head = -1;

void push(int);
void pop();
void display();
void traverse();
void top();

int main()
{
	display();
	return 0;
}

void display()
{
	int opt;
	cout<<"\nChoose an option: \n\n1.Push\n2.Pop\n3.Traverse\n4.Top\n\nOption: ";
	cin>>opt;
	switch(opt)
	{
		case 1: cout<<"\n\nEnter value: ";
			int t;
			cin>>t;
			push(t);
			break;
		case 2: pop();
			break;
		case 3: traverse();
			break;
		case 4: top();
			break;
		default: cout<<"\n\n";
			display();
			break;
	}
}

void push(int v)
{
	if(head==MAX-1)
	{
		cout<<"\n\nStack Overflow!\n"<<endl;
		display();
	}
	
	a[++head] = v;
	display();
}

void pop()
{
	if(head==-1)
	{
		cout<<"\n\nStack Underflow!\n"<<endl;
		display();
	}
	
	head--;
	display();
}

void traverse()
{
	if(head==-1)
	{
		cout<<"\n\nStack Empty!\n"<<endl;
		display();
	}
	
	cout<<"\n\nNow Traversing: \n\n";
	for(int i=0; i<=head; i++) cout<<a[i]<<endl;
	display();
}

void top()
{
	if(head==-1)
	{
		cout<<"\n\nStack Empty!\n"<<endl;
		display();
	}
	
	cout<<"\n\n"<<a[head]<<endl;
	display();
}