#include <bits/stdc++.h>
#include <string>
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
FILE *output;
output = fopen("A.out", "a");
int t;
cin>>t;
for(int aa=0;aa<t;aa++){
	fprintf(output, "Case #%d: ", aa+1);
	int last, standing=0, ans=0;
	cin>>last;
	char tmp[last+1];
	int k[last+1];
	cin>>tmp;
	for(int i=0;i<=last;i++){
		k[i] = tmp[i]-'0';
		if(i<=standing)
			standing += k[i];
		else if(k[i]!=0){
			ans += i-standing;
			standing += k[i]+(i-standing);
		}
	}
	fprintf(output, "%d\n", ans);
}
//getch();
return 0;
}
