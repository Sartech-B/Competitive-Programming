#include <bits/stdc++.h>

using namespace std;

bool isPal(int);

bool isPal(int n){
	int temp = n, rev = 0;
	while(temp>0){
		int d = temp%10;
		rev = (rev*10)+d;
		temp /= 10;
	}
	return (n==rev ? 1 : 0);
}

int main()
{
	int mx = 0;
	for(int i=999; i>99; i--)
	{
		for(int j=999; j>99; j--)
		{
			if(isPal(i*j)) mx = max(mx, i*j);
		}
	}
	cout<<mx<<endl;
}