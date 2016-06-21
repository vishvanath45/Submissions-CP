#include<stdio.h>

int main()
{
int x,y,i,temp,t,h,sze;
scanf("%d",&t);
for(h=0;h<t;h++)
{


scanf("%d",&sze);
int array1[sze];

for(i=0;i<sze;i++)
{
    scanf("%d",&array1[i]);
}
//bubble sort
for(x=0; x<sze; x++)

	{
         for(y=0; y<sze-1; y++)

		{

			if(array1[y]>array1[y+1])

			{

				temp = array1[y+1];

				array1[y+1] = array1[y];

				array1[y] = temp;

			}

		}

	}

int array2[sze-1];

//alloting differance in another array

for(i=0;i<(sze-1);i++)
array2[i]=array1[i+1]-array1[i];

int min=array2[0];

for(i=0;i<(sze-1);i++)
{
if(min>=array2[i])
min=array2[i];
}

printf("%d\n",min);
}
return 0;

}
