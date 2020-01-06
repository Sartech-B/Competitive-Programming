/*
ID: sarthak16
PROG: gift1
LANG: C++
*/
#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

typedef struct flist
{
	char name[15];
	int val;
}nps;

int main()
{
    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
	
    int n;
    fin>>n;
    
	nps np[n];

    for(int t=0; t<n; t++)
    {
    	fin>>np[t].name;
    	np[t].val = 0;
    }
    
    for(int t=0; t<n; t++)
    {
    	char tname[15];
    	fin>>tname;
    	int cur, giv, each, rem;
    	fin>>cur>>giv;
    	
    	if(giv!=0)
    		each = cur/giv;
    	else
    		each = 0;
    	
    	if(giv!=0)
    		rem = cur - (each*giv);
    	else
    		rem = cur;	
    	
    	int curIndex;
    	
    	for(int l=0; l<n; l++)
    	{
    		if(!strcmp(tname, np[l].name))
    		{
    			curIndex = l;
    			break;
    		}
    	}
    	
    	np[curIndex].val += rem-cur;
    	
    	for(int i=0; i<giv; i++)
    	{
    		char tgiv[15];
    		fin>>tgiv;
    		
    		int index;
    		
    		for(int l=0; l<n; l++)
    		{
    			if(!strcmp(tgiv, np[l].name))
    			{
    				index = l;
    				break;
    			}
    		}
    		
    		np[index].val += each;
    	}
    }
    
    //output
    for(int i=0; i<n; i++)
    {
    	fout<<np[i].name<<" "<<np[i].val<<endl;
    }
    
    
	return 0;
}