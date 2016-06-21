#include<stdio.h>
#include<conio.h>
void main()
{int i,j,k,l,m,x,no_of_matrixes;
//scanf("%d",&no_of_matrixes);
// while(no_of_matrixes>0)
// {
// scanf("size_of_array");
//  int arr[size_of_array][size_of_array];
//arrr[size_of_array] = arr[size_of_array][size_of_array];












//no_of_matrixes--;
//}
//getch();
//}

// i am entering a 2*2 matrix in it
int arr[2][2];
for(i=0;i<2;i++)
for(j=0;j<2;j++)
scanf("%d",&arr[i][j]);

int it=0,jt=0;
int count =0;
for(x=1;x<5;x++)
{
{for(i=0;i<2;i++)
{for(j=0;j<2;j++)
if( arr[i][j]== x )
  break;
}
break;
}
it=mod(i-it+1);
jt=mod(j-it+1);

count=count+it+jt;
}

printf("the no of times person has to run is %d",count);


getch();
}






