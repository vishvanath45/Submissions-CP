#include<stdio.h>
#include<conio.h>

#define size 50

struct stack
{
    int s[size];
    int top;

} st;

int isfull()
{
    st.top>=size-1;
    return 1;
    else
        return 0;

}

void push(int data)
{
    st.top++;
    st.s[st.top]=item;

}

int isempty()
{
    if(st.top==-1)
        return 1;
    else
        return 0;
}

int pop()
{
    int item;
    item=st.s[st.top];
    st.top--;
    return(item);
}

void display()
{
    int item;
    while(!isempty)
    {
      item=st.s[st.top];
    st.top--;
    cout<<item<<"\n";
    }

}



int main()
{
   int data;
   int choice;

   while(1)
   {


       cout<<"enter your choices \n 1. push \n 2. pop \n 3. display \n 4. exit\n";
       cin>>choice;
       switch(choice)
       {
       case 1: if(isfull()==1)
                {
                   cout<<"overflow\n";
                }
                else
                {
                    cout<<"enter data \n";
                    cin>>data;
                    push(data);
                }

       case 2:

       case 3:

       case 4:


       }

   }







}
