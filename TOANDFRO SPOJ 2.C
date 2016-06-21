//TOANDFRO SPOJ
#include<stdio.h>
#include<string.h>
int main()
{
    char arr[201];
int c,r,l,x,i,j;
    scanf("%s",arr);
    scanf("%d",&c);
    l=strlen(arr);
    r=l/c;
    char ans[r][c];
    i=0;
    x=0;
    while(i<c)
    {
        for(j=0;j<r;j++)
        {
            ans[j][i]=arr[x];
            x++;
        }

        i++;
        for(j=r-1;j>=0;j++)
        {
            ans[j][i]=arr[x];
            x++;
        }
        i++;
    }

    for(i=0;i<c;i++)
        for(j=0;j<r;j++)
        printf("%s",ans[j][i]);

return 0;
}
