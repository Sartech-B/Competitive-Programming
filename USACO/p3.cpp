/*
ID: sarthak16
PROG: friday
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int isLeap(int);
int perfectWeek(int);

int month[12] = {
31,
28,
31,
30,
31,
30,
31,
31,
30,
31,
30,
31
};

int ans[7] = {
0,
0,
0,
0,
0,
0,
0
};

int presentDay = 3; //perfectWeek(3/* 3 is monday */+12/* Remaining days for 13th jan 1900 */);

int main()
{
	freopen("friday.in", "r", stdin);
	freopen("friday.out", "w", stdout);
	
	int n;
	
	scanf("%d", &n);
	
	for(int i=1900; i<1900+n; i++)
	{
		for(int j=1; j<=12; j++)
		{
			/*
			if(j==1)
			{
				if(i==1900)
					ans[presentDay-1]++;
				else
					ans[(perfectWeek(presentDay + 3))-1]++;
			}
			else if(j==3)
			{
				if(isLeap(i))
					ans[(perfectWeek(presentDay + 1))-1]++;
				else
					ans[presentDay]++;
			}
			else
				ans[(perfectWeek( (month[j-2] == 31) ? (presentDay + 3) : (presentDay + 2) ))-1]++;
			*/
			
			
			int monthEnd = (j==2 && isLeap(i)) ? 29 : month[j-1];
			
			for(int k=1; k<=monthEnd; k++)
			{
				if(k==13)
				{
					ans[presentDay-1]++;
				}
				presentDay = perfectWeek(presentDay + 1);
			}
			
		}
	}
	
	for(int i=0; i<6; i++)
		printf("%d ", ans[i]);
	
	printf("%d\n", ans[6]);
	return 0;
}

int isLeap(int y)
{
	if((y%100==0 && y%400==0) || (y%4==0 && y%100!=0))
		return 1;
	
	return 0;
}

int perfectWeek(int w)
{
	return (w <= 7) ? w : perfectWeek(w-7);
}