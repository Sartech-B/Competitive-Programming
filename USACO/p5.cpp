/*
ID: sarthak16
PROG: milk2
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void setTime(int, int);
void setNull();

int line[1000000];

int main()
{
	freopen("milk2.in", "r", stdin);
	freopen("milk2.out", "w", stdout);
	
	int n;
	scanf("%d", &n);
	
	setNull();
	
	int start = 1000001, end = 0, ans1 = 0, ans2 = 0;
	
	for(int i=0; i<n; i++)
	{
		int time1, time2;
		scanf("%d %d", &time1, &time2);
		
		setTime(time1, time2-1);
		
		if(time1<start) start = time1;
		if(time2>end) end = time2;
	}
	
	int init;
	
	int startIndex;
	
	for(int i=start; i<end; i++)
	{
		if(i==start)
		{
			init = line[i];
			startIndex = i;
		}
		
		else
		{
			switch(line[i])
			{
				case 1:
					if(init!=1)
					{
						int req = i-startIndex;
						if(req>ans2) ans2 = req;
						startIndex = i;
						init = line[i];
					}
					if(i==end-1)
					{
						int req = i-startIndex+1;
						if(req>ans1) ans1 = req;
					}
					break;
					
				case 0:
					if(init!=0)
					{
						int req = i-startIndex;
						if(req>ans1) ans1 = req;
						startIndex = i;
						init = line[i];
					}
					if(i==end-1)
					{
						int req = i-startIndex;
						if(req>ans2) ans2 = req;
					}
					break;
			}
		}
	}
	
	printf("%d %d\n", ans1, ans2);
	//setNull();
	return 0;
}

void setNull()
{
	for(int i=0; i<1000000; i++) line[i] = 0;
}

void setTime(int a, int b)
{
	for(int i=a; i<=b; i++)
	{
		line[i] = 1;
	}
}