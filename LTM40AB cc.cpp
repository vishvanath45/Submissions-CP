#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<string.h>
#include <stack>
using namespace std;
using std::stack;

int main()
{
   
    stack <int > s;
    stack <int > lstactn;
    stack <int > emptystk;//printing kth element
    stack <int > auxstk; //saving last deleted element
  
    int i,t,ch,p,no,kk,del=0;
    cin>>t;
    char arr[1000001];
    char arr2[1000001];
    int length;
    while(t--)
    {
        cin>>ch;
       
        switch(ch)
    {
            if(ch==1|| ch==2)
               {
                lstactn.push(ch);               
            }
        
         case 1:
            {
                //append
         cin>>arr;
         
         length=strlen(arr);
        
         for(i=0;i<length;i++)
             s.push(arr[i]);
       
         break;
            }
         case 2:
            {
                //delete
         cin>>length;
           
                int l2=length;
               
         while(l2--)
         {
          kk=  s.top();
             s.pop();
             auxstk.push(kk);
         }
         break;
            }
        
         case 3:
        {
            //print kth
            int rr;
            
         cin>>no;
            auxarr.swap(s);
           rr=auxarr.size();
            rr=rr-no;
            while(rr--)
            auxarr.pop();
            
            cout<<auxarr.top()<<"\n";
        
         break;
        }
         case 4:
          
            {
                //undo
               
                int lstact=lstactn.top();
                    lstactn.pop();
                if(lstact==1)
                    {
                    while(length--)
                        s.pop();             
                   
                }
                else if(lstact==2)
                    {
                    while(length--)
                        {
                        kk=emptystk.top();
                            emptystk.pop();
                        s.push(kk);
                    }
                }
            }
            break;
       
    }
}
    return 0;
   
}
