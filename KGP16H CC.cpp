//acm kgp16h  //kgp mirror contest acm16

#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;

while(t--)
{
int nvill;
cin>>nvill;

int profit[nvill];
int taxvalue[nvill-1];
int tax[nvill-1];

int i;

for(i=0;i<nvill;i++)
cin>>profit[i];

for(i=0;i<nvill-1;i++)
{
cin>>taxvalue[i];
}


for(i=0;i<nvill-1;i++)
{
int x;
cin>>x;


tax[i]=x;
}
int sum=0;
int maxsum=profit[0];
int tsum=0;

for(i=1;i<nvill;i++)
{
sum=profit[i]-(tax[i-1]*taxvalue[i-1]);

//cout<<"sum for"<<i<<"is"<<sum<<"\n";

tsum+=sum;

if(tsum>0)
{
maxsum+=tsum;
tsum=0;
}


}

cout<<maxsum<<"\n";

}

return 0;

}
