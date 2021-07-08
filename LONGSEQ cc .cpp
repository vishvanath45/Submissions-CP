//cc LONGSEQ


#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>
#include<math.h>
#include<string.h>
int main()
{
long long int sum,hh,k,l,p;

cin>>hh;

char c[100001];

while(hh--)
{
scanf("%s",c);
l=strlen(c);

k=l;

sum=0;

l-=1;
while(l>=0)
{
if(c[l]=='1')
sum=sum+1;

l--;
}



if(sum==1||sum==(k-1))
{

    printf("Yes\n");
}
else
{
    printf("No\n");
}




}
return 0;


}
