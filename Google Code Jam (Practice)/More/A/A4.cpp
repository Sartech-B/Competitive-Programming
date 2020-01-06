#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int main()
{
	freopen("in", "r", stdin);
	freopen("out", "w", stdout);
	int T;
	scanf("%d", &T);
	for(int tt=1; tt<=T; tt++)
	{
		printf("Case #%d: ", tt);
		int n, k;
		bool rWon = false, bWon = false, ansF = false;
		scanf("%d %d", &n, &k);
		char a[n][n];
		for(int i=0; i<n; i++)
		{
			scanf("%s", a[i]);
		}
		
		for(int k=0; k<n; k++)
		{
			for(int i=0; i<n; i++)
			{
				bool blank = false;
				for(int j=n-1; j>=0; j--)
				{
					if(a[i][j]!='.' && blank)
					{
						a[i][j+1] = a[i][j];
						a[i][j] = '.';
					}
					else if(a[i][j]=='.')
						blank = true;
				}
			}
		}
	
		// cout<<endl;
		// for(int i=0; i<n; i++)
		// {
		// 	for(int j=0; j<n; j++)
		// 		printf("%c", a[i][j]);

		// 	cout<<endl;
		// }
			
		// cout<<endl;
		//horizontal
		
		for(int i=0; i<n; i++)
		{
			int r=0, b=0;
			for(int j=0; j<n; j++)
			{
				switch(a[i][j])
				{
					case 'R':
						if(b!=0)
						{
							b = 0;
							r++;
						}
						else
							r++;
						break;
					
					case 'B':
						if(r!=0)
						{
							r = 0;
							b++;
						}
						else
							b++;
						break;
				}
				if(r>=k)
				{
					rWon = true;
				}
				if(b>=k)
				{
					bWon = true;
				}
				if(rWon && bWon)
				{
					ansF = true;
					break;
					break;
				}
			}
		}
		
		//vertical
		
		if(!ansF)
		{
			for(int j=0; j<n; j++)
			{
				int r=0, b=0;
				for(int i=0; i<n; i++)
				{
					switch(a[i][j])
					{
						case 'R':
							if(b!=0)
							{
								b = 0;
								r++;
							}
							else
								r++;
							break;
						
						case 'B':
							if(r!=0)
							{
								r = 0;
								b++;
							}
							else
								b++;
							break;
					}
					if(r>=k)
					{
						rWon = true;
					}
					if(b>=k)
					{
						bWon = true;
					}
					if(rWon && bWon)
					{
						ansF = true;
						break;
						break;
					}
				}
			}
		}
		

		//diagonals-->


		if(!ansF)
		{
			for(int t=0; t<n-1; t++)
			{
				int i = n-1, j = t;
				int r = 0, b = 0;
				while(j<n)
				{
					switch(a[i][j])
					{
						case 'R':
							if(b!=0)
							{
								b = 0;
								r++;
							}
							else
								r++;
							break;
						
						case 'B':
							if(r!=0)
							{
								r = 0;
								b++;
							}
							else
								b++;
							break;
					}
					if(r>=k)
						rWon = true;
					if(b>=k)
						bWon = true;
					
					if(rWon && bWon)
					{
						ansF = true;	
						break;
						break;
					}
					i--;
					j++;
				}
			}
		}
		
		
		







		if(!ansF)
		{
			for(int t=0; t<n-1; t++)
			{
				int i = t, j = 0;
				int r = 0, b = 0;
				while(i<n)
				{
					switch(a[i][j])
					{
						case 'R':
							if(b!=0)
							{
								b = 0;
								r++;
							}
							else
								r++;
							break;
						
						case 'B':
							if(r!=0)
							{
								r = 0;
								b++;
							}
							else
								b++;
							break;
					}
					if(r>=k)
						rWon = true;
					if(b>=k)
						bWon = true;
						
					if(rWon && bWon)
					{
						ansF = true;	
						break;
						break;
					}
					i++;
					j++;
				}
			}
		}







		if(!ansF)
		{
			for(int t=0; t<n-1; t++)
			{
				int i = 0, j = t;
				int r = 0, b = 0;
				while(i<n)
				{
					switch(a[i][j])
					{
						case 'R':
							if(b!=0)
							{
								b = 0;
								r++;
							}
							else
								r++;
							break;
						
						case 'B':
							if(r!=0)
							{
								r = 0;
								b++;
							}
							else
								b++;
							break;
					}
					if(r>=k)
						rWon = true;
					if(b>=k)
						bWon = true;
						
					if(rWon && bWon)
					{
						ansF = true;	
						break;
						break;
					}
					i++;
					j++;
				}
			}
		}












		
		if(!ansF)
		{
			for(int t=n-1; t>0; t--)
			{
				int i = t, j = 0;
				int r = 0, b = 0;
				while(i>0)
				{
					switch(a[i][j])
					{
						case 'R':
							if(b!=0)
							{
								b = 0;
								r++;
							}
							else
								r++;
							break;
						
						case 'B':
							if(r!=0)
							{
								r = 0;
								b++;
							}
							else
								b++;
							break;
					}
					if(r>=k)
						rWon = true;
					if(b>=k)
						bWon = true;
						
					if(rWon && bWon)
					{
						ansF = true;	
						break;
						break;
					}
					i--;
					j++;
				}
			}
		}
		








		if(ansF)
			printf("Both");
		else if(rWon && !bWon)
			printf("Red");
		else if(bWon && !rWon)
			printf("Blue");
		else
			printf("Neither");
			
		cout<<endl;
		
	}
}