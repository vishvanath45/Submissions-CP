//SNAPE

#include<stdio.h>

int main()
{
float min_rs,max_rs;
int m,i,ls,bs;

scanf("%d",&m);

for(i=0;i<m;i++)
{



scanf("%f %f",&ls,&bs);
max_rs=sqrt(ls*ls+bs*bs);
min_rs=sqrt(bs*bs-ls*ls);
printf("%f %f/n",min_rs,max_rs);
}

return 0;

}
