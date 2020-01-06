/*
ID: sarthak16
PROG: transform
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int option1(int);
int option2(int);
int option3(int);
int option4();
int option5();
int comp(int);

char a[10][10];
char tar[10][10];
char f[10][10];
char l[10][10];

int n;

int main()
{
	freopen("transform.in", "r", stdin);
	freopen("transform.out", "w", stdout);
	
	scanf("%d", &n);
	
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			cin>>a[i][j];
	}
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
			cin>>tar[i][j];
	}

	
	if(option1(0)) printf("1\n");
	else if(option2(0)) printf("2\n");
	else if(option3(0)) printf("3\n");
	else if(option4()) printf("4\n");
	else if(option5()) printf("5\n");
	else if(comp(0)) printf("6\n");
	else printf("7\n");

	return 0;
}

int comp(int c)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(!c && a[i][j]!=tar[i][j]) return 0;
			else if(c==1 && f[i][j]!=tar[i][j]) return 0;
			else if(c==2 && l[i][j]!=tar[i][j]) return 0;
		}
	}

	return 1;
}

int option1(int c)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(!c) f[j][n-i-1] = a[i][j];
			else l[j][n-i-1] = f[i][j];
		}
	}
	
	if(!c && comp(1)) return 1;
	else if(c && comp(2)) return 1;
	
	return 0;
}

int option2(int c)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(!c) f[n-i-1][n-j-1] = a[i][j];
			else l[n-i-1][n-j-1] = f[i][j];
		}
	}
	
	if(!c && comp(1)) return 1;
	else if(c && comp(2)) return 1;
	
	return 0;
}

int option3(int c)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(!c) f[n-j-1][i] = a[i][j];
			else l[n-j-1][i] = f[i][j];
		}
	}
	
	if(!c && comp(1)) return 1;
	else if(c && comp(2)) return 1;
	
	return 0;
}

int option4()
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			f[i][n-j-1] = a[i][j];
		}
	}
	
	return (comp(1)) ? 1 : 0;
}

int option5()
{
	option4();
	if(option1(1) || option2(1) || option3(1))
		return 1;
	
	return 0;
}