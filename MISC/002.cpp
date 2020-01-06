#include <bits/stdc++.h>
#include <conio.h>

#define X 1
#define O 2
#define MAX 3

using namespace std;

int a[3][3] = {
{0, 0, 0},
{0, 0, 0},
{0, 0, 0}
};

void chance();
void printMatrix();
void solve();
bool check();
bool center();
bool corners();
bool edges();
bool fork1();
bool fork2();

int main()
{
	int ch;
	cout<<"\nChoose an option: \n\n1.Let the computer Start.(Hard)\n2.I want to Start.(Easy)\n3.Quit\n\nChoice: ";
	cin>>ch;
	switch(ch){
		case 1: a[0][2] = O;
		cout<<"\n\nThe computer started: \n";
		break;
		case 2: //do nothing
		break;
		case 3: return 0;
		break;
	}
	chance();
}

bool check()
{
	if((a[0][0]==O && a[0][1]==O && a[0][2]==O) || (a[1][0]==O && a[1][1]==O && a[1][2]==O) ||(a[2][0]==O && a[2][1]==O && a[2][2]==O) || (a[0][0]==O && a[1][1]==O && a[2][2]==O) || (a[0][2]==O && a[1][1]==O && a[2][0]==O) || (a[0][0]==O && a[1][0]==O && a[2][0]==O) || (a[0][1]==O && a[1][1]==O && a[2][1]==O) || (a[0][2]==O && a[1][2]==O && a[2][2]==O))
	{
		cout<<"\n\nThe computer won against the user!\n\n"<<endl;
		printMatrix();
		getch();
		return true;
	}
	else if((a[0][0]==X && a[0][1]==X && a[0][2]==X) || (a[1][0]==X && a[1][1]==X && a[1][2]==X) ||(a[2][0]==X && a[2][1]==X && a[2][2]==X) || (a[0][0]==X && a[1][1]==X && a[2][2]==X) || (a[0][2]==X && a[1][1]==X && a[2][0]==X) || (a[0][0]==X && a[1][0]==X && a[2][0]==X) || (a[0][1]==X && a[1][1]==X && a[2][1]==X) || (a[0][2]==X && a[1][2]==X && a[2][2]==X))
	{
		cout<<"\n\nThe user won against the computer!\n\n"<<endl;
		printMatrix();
		getch();
		return true;
	}
	else if(a[0][0]!=0 && a[0][1]!=0 && a[0][2]!=0 && a[1][0]!=0 && a[1][1]!=0 && a[1][2]!=0 && a[2][0]!=0 && a[2][1]!=0 && a[2][2]!=0)
	{
		cout<<"\n\nDraw Match!\n\n"<<endl;
		printMatrix();
		getch();
		return true;
	}
	return false;
}

void printMatrix()
{
	cout<<endl;
	for(int x=0;x<MAX;x++)
	{
		for(int y=0;y<MAX;y++)
		{
			if(a[x][y]==0)
				cout<<"-"<<"\t";
			else if(a[x][y]==1)
				cout<<"X"<<"\t";
			else if(a[x][y]==2)
				cout<<"O"<<"\t";
		}
		cout<<endl;
	}
}

void solve()
{
	int i=0, s[9], w[9], temp, temp2, x1, x2, y1, y2, z=0, b=0, p=0;
	for(int x=0;x<MAX;x++)
	{
		for(int y=0;y<MAX;y++)
		{
			if(a[x][y]==X)
			{
				temp = 10 * x + y;
				s[i] = temp;
				i++;
			}
			else if(a[x][y]==O)
			{
				temp2 = 10 * x + y;
				w[p] = temp2;
				p++; 
			}
		}
	}
	//trying to win
	for(int k=0;k<p-1;k++)
	{
		for(int j=k+1;j<p;j++)
		{
			x1 = w[k]/10;
			y1 = w[k]%10;
			x2 = w[j]/10;
			y2 = w[j]%10;
			x1++;
			x2++;
			y1++;
			y2++;
			if(x1==x2)
			{
				if((y1+y2)==3)
					z = y1+y2;
				else
					z = abs(y1-y2);
				if(a[x1-1][z-1]==0)
				{
					a[x1-1][z-1] = O;
					cout<<"\n\nGoing to play a move to win! it is for x to be same\n\n";
					//getch();
					return;
				}
			}
			if(y1==y2)
			{
				if((x1+x2)==3)
					z = x1+x2;
				else
					z = abs(x1-x2);
				if(a[z-1][y1-1]==0)
				{
					a[z-1][y1-1] = O;
					cout<<"\n\nGoing to play a move to win! it is for y to be same\n\n";
					//getch();
					return;
				}
			}
			if(((x1-2)==x2 || (x1+2)==x2) && ((y1-2)==y2 || (y1+2)==y2))
			{
				if(a[1][1]==0)
				{
					a[1][1] = O;
					cout<<"\n\nGoing to play a move to win! it is for middle\n\n";
					//getch();
					return;
				}
			}
			if((x1+x2==3 || abs(x1-x2)==1) && (y1+y2==3 || abs(y1-y2)==1) && ((x1+x2==5 && y1+y2==3) || (x1+x2==3 && y1+y2==5)) && (2%(x1+y1)==0 && 2%(x2+y2)==0))
			{
				if(x1+x2==3)
					z = x1+x2;
				else if(abs(x1-x2)==1)
					z = abs(x1-x2);
				else
					z = abs(x1-x2);
				
				if(y1+y2==3)
					b = y1+y2;
				else if(abs(y1-y2)==1)
					b = abs(y1-y2);
				else
					b = abs(y1-y2);
				
				if(a[z-1][b-1]==0)
				{
					a[z-1][b-1] = O;
					cout<<"\n\nGoing to play a move to win! it is for diagonal\n\n";
					//getch();
					return;	
				}
			}
		}
	}
	//blocking a move
	for(int j=0;j<i-1;j++)
	{
		for(int k=j+1;k<i;k++)
		{
			x1 = s[j]/10;
			y1 = s[j]%10;
			x2 = s[k]/10;
			y2 = s[k]%10;
			x1++;
			x2++;
			y1++;
			y2++;
			if(x1==x2)
			{
				if((y1+y2)==3)
					z = y1+y2;
				else
					z = abs(y1-y2);
				if(a[x1-1][z-1]==0)
				{
					a[x1-1][z-1] = O;
					cout<<"\n\nGoing to block user's move!\n\n";
					//getch();
					return;
				}
			}
			if(y1==y2)
			{
				if((x1+x2)==3)
					z = x1+x2;
				else
					z = abs(x1-x2);
				if(a[z-1][y1-1]==0)
				{
					a[z-1][y1-1] = O;
					cout<<"\n\nGoing to block user's move!\n\n";
					//getch();
					return;
				}
			}
			if(((x1-2)==x2 || (x1+2)==x2) && ((y1-2)==y2 || (y1+2)==y2))
			{
				if(a[1][1]==0)
				{
					a[1][1] = O;
					cout<<"\n\nGoing to block user's move!\n\n";
					//getch();
					return;
				}
			}
			if((x1+x2==3 || abs(x1-x2)==1) && (y1+y2==3 || abs(y1-y2)==1) && ((x1+x2==5 && y1+y2==3) || (x1+x2==3 && y1+y2==5)) && ((x1+y1)%2==0 && (x2+y2)%2==0))
			{
				if(x1+x2==3)
					z = x1+x2;
				else if(abs(x1-x2)==1)
					z = abs(x1-x2);
				else
					z = abs(x1-x2);
				
				if(y1+y2==3)
					b = y1+y2;
				else if(abs(y1-y2)==1)
					b = abs(y1-y2);
				else
					b = abs(y1-y2);
				
				if(a[z-1][b-1]==0)
				{
					a[z-1][b-1] = O;
					cout<<"\n\nGoing to block user's move!\n\n";
					//getch();
					return;
				}
			}
		}
	}
	if(corners()) return;
	if(edges()) return;
	if(center()) return;
	if(fork1()) return;
	if(fork2()) return;
	//add anywhere randomly
	for(int x=0;x<MAX;x++)
	{
		for(int y=0;y<MAX;y++)
		{
			if(a[x][y]==0)
			{
				a[x][y] = O;
				cout<<"this one was added randomly!";
				getch();
				return;
			}
		}
	}
}

bool corners()
{
	if(a[2][2]==0)
	{
		a[2][2] = O;
		return true;
	}
	if(a[2][0]==0)
	{
		a[2][0] = O;
		return true;
	}
	if(a[0][2]==0)
	{
		a[0][2] = O;
		return true;
	}
	if(a[0][0]==0)
	{
		a[0][0] = O;
		return true;
	}
	return false;
}

bool edges()
{
	if(a[1][0]==0)
	{
		a[1][0] = O;
		return true;
	}
	if(a[1][2]==0)
	{
		a[1][2] = O;
		return true;
	}
	if(a[0][1]==0)
	{
		a[0][1] = O;
		return true;
	}
	if(a[2][1]==0)
	{
		a[2][1] = O;
		return true;
	}
	return false;
}

bool fork2()
{
	if(a[2][2]==X)
	{
		if(a[1][2]==0)
		{
			a[1][2] = O;
			return true;
		}
		if(a[2][1]==0){
			a[2][1] = O;
			return true;
		}
	}
	if(a[0][0]==X)
	{
		if(a[0][1]==0)
		{
			a[0][1] = O;
			return true;
		}
		if(a[1][0]==0){
			a[1][0] = O;
			return true;
		}
	}
	if(a[0][2]==X)
	{
		if(a[1][2]==0)
		{
			a[1][2] = O;
			return true;
		}
		if(a[0][1]==0){
			a[0][1] = O;
			return true;
		}
	}
	if(a[2][0]==X)
	{
		if(a[1][0]==0)
		{
			a[1][0] = O;
			return true;
		}
		if(a[2][1]==0){
			a[2][1] = O;
			return true;
		}
	}
	return false;
}

bool fork1()
{
	if(a[1][1]==X)
	{
		if(a[1][0]==0)
		{
			a[1][0] = O;
			return true;
		}
		if(a[1][2]==0)
		{
			a[1][2] = O;
			return true;
		}
		if(a[0][1]==0)
		{
			a[0][1] = O;
			return true;
		}
		if(a[2][1]==0)
		{
			a[2][1] = O;
			return true;
		}
	}
	return false;
}

bool center()
{
	if(a[1][1]==0)
	{
		a[1][1] = O;
		return true;
	}
	return false;
}

void chance()
{
	int pos, x, y;
	printMatrix();
	cout<<"\n\nEnter position to enter 'X': ";
	cin>>pos;
	if(pos>3)
	{
		if(pos==4 || pos==7)
			y = 0;
		else if(pos==5 || pos==8)
			y = 1;
		else if(pos==6 || pos==9)
			y=2;
		if(pos==4 || pos==5 || pos==6)
			x = 1;
		else if(pos==7 || pos==8 || pos==9)
			x = 2;
	}
	else
	{
		y = pos-1;
		x = 0;
	}
	if(a[x][y]!=0)
	{
		cout<<"\n\nSpace not empty.Retry!\n\n"<<endl;
		chance();
	}
	else
	{
		a[x][y] = X;
		if(check())
			return;
		solve();
		if(check())
			return;
		chance();
	}
}