//166A CF
#include<iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>

int main()
{

    int sze,ques,pen;
    int i,arr[sze];

    for(i=0;i<sze;i++)
    {
        scanf("%d %d",&ques,&pen);

        arr[i]=(ques*100)+pen;


    }

    sort(arr,arr+sze-1);


    for(i=0;i<sze;i++)
    {

        printf("%d\t",arr[i]);
    }



    return 0;






}
