#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
FILE *out;
out = fopen("B.out","a");
int t;
cin>>t;
for(int aa=0;aa<t;aa++){
	fprintf(out, "Case #%d: ", aa+1);
	cout<<"Case #"<<aa+1<<": ";
	long long n, head=1;
	int b, tmp=1, imin=100000;
	cin>>b>>n;
	int m[b], t[b], last=1;
	for(int i=0;i<b;i++){
		cin>>m[i];
		t[b] = m[i];
		if(imin>m[i])
			imin = m[i];
	}
	while(tmp==1){
		while(last==1){
			for(int i=0;i<b;i++){
				if(t[i]==m[i]){
					if(i==b-1)
						last=0;
					if(head==n){
						cout<<i+1<<endl;
						fprintf(out, "%d\n", i+1);
						tmp=0;
						i=b;
						last=0;
						break;
						break;
						break;
					}
					else head++;
				}
			}
		}
		if(tmp == 1){
			last = 1;
			for(int k=0;k<b;k++){
				if(t[k]!=m[k])
					t[k]++;
				else
					t[k]=0;
			}
		}
	}
}
return 0;
}