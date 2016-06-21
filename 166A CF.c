//166A CF
#include <iostream>
#include<algorithm>
using namespace std;
#include<stdio.h>

int main()
{

    int sze,ques,pen;
    scanf("%d",&sze);
    int i,arr[sze],rank;
    scanf("%d",&rank);

    for(i=0;i<sze;i++)
    {
        scanf("%d",&ques);
        scanf("%d",&pen);

        arr[i]=(ques*100)-pen;


    }

    sort(arr,arr+sze);

  int qsolved;
  qsolved=arr[sze-rank];

int  count=0;

  for(i=0;i<sze;i++)
  {
      if((arr[i])==qsolved)
        count++;
  }

printf("%d\n",count);

    return 0;


}
