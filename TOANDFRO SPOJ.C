//TOANDFRO SPOJ
#include<stdio.h>
#include<string.h>
int main()
{int c;
    char arr[201];
    scanf("%d",&c);
int i,j,l,r,xx;
    scanf("%s",arr);
    l=strlen(arr);
    r=l/c;
    xx=0;

       char ans[r][c];
    for(j=0; j<c; j++)
    {
        for(i=0; i<r; i++)
        {
            ans[i][j]=arr[xx];
            xx++;
        }
        j++;
        for(i=(r-1); i>=0; i++)
        {
            ans[i][j]=arr[xx];
            xx++;
        }

    }

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
        {printf("%c",ans[r][c]);
             printf("hohoh");
        }
        return 0;



}
