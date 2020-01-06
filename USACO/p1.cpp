/*
ID: sarthak16
PROG: ride
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
	
    char comet[7], grp[7];
    int c = 1, g = 1;
    fin>>comet>>grp;
    
    for(int i=0; i<6; i++)
    {
    	if(comet[i]>='A' && comet[i]<='Z')
    		c *= (comet[i] - 'A' + 1);
    	//c %= 47;
    	if(grp[i]>='A' && grp[i]<='Z')
    		g *= (grp[i] - 'A' + 1);
    	//g %= 47;
    }
    
    c %= 47;
    g %= 47;
    
    if(c==g) fout<<"GO"<<endl;
    else fout<<"STAY"<<endl;
    
	return 0;
}