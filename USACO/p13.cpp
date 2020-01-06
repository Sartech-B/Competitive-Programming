/*
ID: sarthak16
PROG: combo
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	freopen("combo.in", "r", stdin);
	freopen("combo.out", "w", stdout);
	
	int n;
	cin>>n;
	int a1, b1, c1, a2, b2, c2, a, b, c;
	cin>>a1>>b1>>c1>>a2>>b2>>c2;
	
	if(n<=5)
	{
		cout<<n*n*n<<endl;
		return 0;
	}
	
	a = 5-min(abs(a2-a1), min(a2, a1)+n-max(a2, a1));
	b = 5-min(abs(b2-b1), min(b2, b1)+n-max(b2, b1));
	c = 5-min(abs(c2-c1), min(c2, c1)+n-max(c2, c1));
	
	if(a<0) a = 0;
	if(b<0) b = 0;
	if(c<0) c = 0;
	
	cout<<250-(a*b*c)<<endl;
	return 0;
}