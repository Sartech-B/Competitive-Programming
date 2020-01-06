#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int all[4][4] = {
{1, 'i', 'j', 'k'},
{'i', -1, 'k', -'j'},
{'j', -'k', -1, 'i'},
{'k', 'j', -'i', -1}
};

int mul(int, int);

int mul(int a, int b){
int x, y, sign = 1;
if(a<0){
a = -a;
sign = -sign;
}
if(b<0){
b = -b;
sign = -sign;
}
if(a==1) x=0;
else if(a==(int)'i') x=1;
else if(a==(int)'j') x=2;
else if(a==(int)'k') x=3;
if(b==1) y=0;
else if(b==(int)'i') y=1;
else if(b==(int)'j') y=2;
else if(b==(int)'k') y=3;
return all[x][y] * sign;
}

int main(){
FILE *out;
out = fopen("C.out", "a");
int t;
cin>>t;
for(int aa=1;aa<=t;aa++){
	fprintf(out, "Case #%d: ", aa);
	cout<<"Case #"<<aa<<": ";
	long long l, x, last=0;
	bool first=false, mid=false;
	cin>>l>>x;
	char a[l];
	cin>>a;
	for(int i=0;i<x;i++){
		for(int j=0;j<l;j++){
			if(i==0 && j==0){
				last = (int)a[j];
			}
			else{
				if(last==(int)'i' && !first && !mid){
					first = true;
					last = (int)a[j];
				}
				else if(last==(int)'j' && first  && !mid){
					mid = true;
					last = (int)a[j];
				}
				else{
					last = mul(last, (int)a[j]);
				}
			}
		}
	}
	if(first==true && mid==true && last==(int)'k'){
		cout<<"YES"<<endl;
		fprintf(out, "YES\n");	
	}
	else{
		cout<<"NO"<<endl;
		fprintf(out, "NO\n");
	}
}
getch();
return 0;
}