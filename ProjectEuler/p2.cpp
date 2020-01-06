#include <bits/stdc++.h>

using namespace std;

int main(){
	long int i = 1, j = 1, next = 0, ans;
	while(next<4000000)
	{
		next = i+j;
		i = j;
		j = next;
		if(j%2==0) ans += j;
	}
	cout<<ans<<endl;
}