#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

int sumDigits(long long unsigned int);

int sumDigits(long long unsigned int n){
int ans = 0, tmp=1;
while(n){
	tmp = n%10;
	ans += tmp;
	n /= 10;
}
return ans;
}

int main(){
long long unsigned int p=1;
int ans, n;
cin>>n;
for(int i=0;i<n;i++){
	p *= 2;
	cout<<p<<endl;
	getch();
}
cout<<"p is "<<p<<endl;
ans = sumDigits(p);
cout<<ans<<endl;
getch();
return 0;
}