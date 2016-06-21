//binary search again thoery workout
#include<stdio.h>
//considering array to be sorted asending
//s starting
//e ending
/*  VVIMP here to note that we should make that positin mid+1 and mid-1(not make value of l and r as mid) because
it creates trouble in end condition as like if last elemnt is at 9 position and mid is 8 then again and again
mid will come 8 and that loop arr[x]>mid so again will relate l to be mid will will make it infinite loop so we make mid+1
so now it will come at position of 9 */
int BS(int arr[],int l,int r,int key)
{int m;


    while( r - l >1 )
    {
        m = l + (r - l)/2;

        if( arr[m] <= key )
            l = m;
        else
            r = m;
    }

    return arr[l];

}

int main()
{
    int arr[]={10,12,13,14,15,16,18,19,20};

int s,e;
    int xx;
    scanf("%d",&xx);
    s=0;
    e=9;
    int pos;
    pos=BS(arr,s,e,xx);

    printf("floor value of this is %d",pos);


    return 0;


}
