#include <bits/stdc++.h>
#include <conio.h>

using namespace std;

long long int triNum(long long int);
int divisors(long long int);

long long int triNum(long long int n){
long long int ans=0;
for(int i=1;i<=n;i++)
	ans += i;
return ans;
}

int divisors(long long int n){
int ans;
for(long long int i=1;i<=n;i++)
	if(n%i==0) ans++;
return ans;
}

int main(){
long long int i=12374;
long long int ans;
while(true){
	cout<<triNum(i)<<endl;
	if(divisors(triNum(i))>500){
		ans = triNum(i);
		break;
	}
	i++;
}
cout<<ans<<endl;
getch();
return 0;
}