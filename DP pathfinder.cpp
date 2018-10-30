// DP pathfinder


#include<bits/stdc++.h>
#define pb push_back
using namespace std;


//recursive approach

int func(int x, int y)
{

if(!isvalidcell(x,y))
    return 0;

    if(islastcell(x,y))
    return 1;
    else
    return func(x+1,y)+func(x,y+1);

}

// dp approach


int pathexist[100][100];
memset( pathexist , -1, sizeof(pathexist));


pathexist[n-1][n-1]=1;


int func(int x, int y)
{

if(pathexist[x][y]!=1)
    return pathexist[x][y];
else
{
if(!isvalidcell(x,y))
    return 0;

    if(islastcell(x,y))
    return 1;
    else
    pathexist[x][y]= func(x+1,y)+func(x,y+1);
    return pathexist[x][y];


}




}






