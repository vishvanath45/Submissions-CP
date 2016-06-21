//474 B CF
//success in 1 run
#include<stdio.h>


long long int BS(long long int arr[],long long int l,long long int r,long long int tofnd)
{
    long long int counter;
    long long int mid;
    while(r-l>1)
    {
        counter=0;
        mid=(l+r)/2;


        if(arr[mid]==tofnd)
        {
            return mid;
            counter=1;
            break;

        }
        else if(arr[mid]>tofnd)
        {
            r=mid;
        }
        else
        {
            l=mid;
        }




    }
    if((r-l==1))
    {
        return r;

    }

}
int main()
{

    long long int i,sze,tin,ttofnd,sum=0;

    scanf("%lld",&sze);
    long long int arr[sze+1],l,r,tofnd;
    arr[0]=0;

    for(i=1;i<=sze;i++)
    {
        scanf("%lld",&tin);
        sum=sum+tin;
        arr[i]=sum;


    }
long long int answer;

scanf("%lld",&ttofnd);
for(i=0;i<ttofnd;i++)
  {

   scanf("%lld",&tofnd);


    answer=BS(arr,0,sze+1,tofnd);


    printf("%lld\n",answer);

  }

    return 0;


}
