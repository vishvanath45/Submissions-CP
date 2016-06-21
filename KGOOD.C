// snackdown qualifier
//KGOOD

#include<stdio.h>

int main()
{

char word[100000];
int count[26];
gets(word);
int i,j=0;
int z=0;
int c=0;
int p=97;
int x;
for(i=0;word[i]!='\0';i++)
{
    for(x=0;word[x]!='\0';x++)
   {

    if(word[x]==(p))
    {
        c++;
    }
   }
   if(c>0)
    {
        count[z]=c;
        z++;
        c=0;
    }

    p++;
}

int h;

for(h=0;h<z;h++)
{
    printf("%d",count[h]);

}

return 0;

}
