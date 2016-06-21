//snack down codechef
#include<stdio.h>

int main()
{
long long int s,i;
long long int tt,counter;
scanf("%lld",&tt);

while(tt!=0)
    {scanf("%lld",&s);
    long long int arr[s];

    for(i=0;i<s;i++)
        scanf("%lld",&arr[i]);
counter=0;


    for(i=0; i<s-2; i++)
    {
        if(arr[i]==arr[i+1])
        {
            if(arr[i+1]==arr[i+2])
               {

                printf("Yes\n");
                counter=1;
                break;
               }
        }
    }
    if(counter==0)
        printf("No\n");
        tt--;
    }
    return 0;
}
