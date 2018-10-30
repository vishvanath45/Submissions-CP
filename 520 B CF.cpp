// 520 B CF

// galat kar raha hu isme bfs lagega


#include <bits/stdc++.h>
using namespace std;

int xx=0;

int location[10001]={0};

int visited[10001]={0};

int DFS(int i,int m, int count )
{
    if(i==m)
    {
        location[i]=count;
        return count;
    }
    else if(i<=0 || i>=2*m)
    {
       // cout<<"current i value  "<<i<<"\n";

       // cout<<"something is happening \n";
        return 0;k
    }
    else if(visited[i]==0||location[i]>count)
    {

        //cout<<"running "<<xx<<"\n";
        xx++;
       // cout<<"current i value  "<<i<<"\n";

        if(xx>10)
           return 0;
             cout<<"current i value  "<<i<<"\n";
            visited[i]=1;
            location[i]=count;
        int ss = DFS(i-1,m, count+1);
        int s  = DFS(i*2,m, count+1);


       // cout<<"s is "<<s<<"   ss is "<<ss<<"\n";
        if(s>0 || ss>0)
        {
        if( s>0 && ss>0 )
        return min(s,ss);
        else
        return max(s,ss);
        }
        else
        return 0;
        }
        else
        return 0;



}



int main()
{


    int n, m;
    cin>>n>>m;
    int sm ;

    if(m>n)
     sm = DFS(n,m,0);
    else if(m<n)
    sm  = n-m;
    else
    sm =0;

    cout<<sm<<"\n";

    return 0;



}
