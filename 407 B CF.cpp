// 407 B CF

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{

int b,q,l,m;


cin>>b>>q>>l>>m;

int noofterms=0;

if((q>0&&l>0))
{
noofterms = log((float)abs(l)/abs(b))/log(abs(q));
}


cout<<noofterms<<"***\n";


int badno[m];

for(int i =0;i<m;i++)
    cin>>badno[i];

int nooftermsnotinclude=0;

sort(badno,badno+m);

for(int i =0;i<m;i++)
{

double position =0;

if(badno[i]>=b&&badno[i]<=l&&badno[i]>=-l)
{

position = log((float)badno[i]/b)/log(q);

if(position == ceil(position))
nooftermsnotinclude++;

}



}

cout<<noofterms-nooftermsnotinclude;

return 0;

}


