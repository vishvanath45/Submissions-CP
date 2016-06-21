//MMPROD SNACKDOWN 16 CODEXHEF
//weong algo not fully applicable if max prod made by elements in middle
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    long long int j,i,sze,k, mod=1000000007;
    int temp;
    int countt=0;
    scanf("%lld %lld",&sze,&k);
    int arr[sze];
    for(i=0; i<sze; i++)
    {
        scanf("%lld",&arr[i]);

    }

    for(i=0; i<sze; i++)
    {

        for(j=i+1; j<sze; j++)
            if(abs(arr[i])>=abs(arr[j]))
            {
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }

    }
    int count=0;
    int prod=1;
    for(i=sze-1; i>=sze-k; i--)
    {

        if(arr[i]<0)
            count++;

        if(i!=sze-k)
        {
            prod=((prod%mod)*(arr[i]%mod))%mod;
        }
    }
    if(count==sze)
    {
        for(i=0; i<k; i++)
            prod=((prod%mod)*(arr[i]%mod))%mod;

        printf("hug%lld",prod);

    }
    else if(count%2==0)
    {
        printf("**maks%lld**",((arr[sze-k]%mod)*(prod%mod))%mod);

    }
    else
    {
        if(arr[sze-k]<0)
        {
            i=sze-k-1;
            while(1)
            {
                if(arr[i]>0||i==0)
                {
                    printf("**dola%lld**",((((arr[i]%mod)*(prod%mod))%mod)+mod)%mod);
                    break;
                }

                else
                    i--;
            }
        }
        else
        {
            {
                i=sze-k-1;
                while(1)
                {
                    if(arr[i]<0||i==0)
                    {
                        printf("**hulu%lld**",(((arr[i]%mod)*(prod%mod))%mod));
                        break;
                    }
                    else
                        i--;
                }
            }




        }



    }


    return 0;
}

