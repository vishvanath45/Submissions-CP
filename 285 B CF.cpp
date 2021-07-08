// 285 B CF

#include<bits/stdc++.h>
#define ll long long int
using namespace std;


int main()
{
    int n,st,ed;

    cin>>n>>st>>ed;

    int visited[n+1]= {0};

    int arr[n+1];



    for(int i =1 ; i <=n; i++)
        cin>>arr[i];


    if(st==ed)
    {cout<<0;
    return 0;

    }
    ll counter=0;
    //cout<<startat<<" = startat \n";

    while( 1 && arr[st]!=ed &&visited[st]==0 )
    {
    counter++;

    visited[st]=1;
    st=arr[st];

       // cout<<".\n";

    }

    if(visited[st]==0)
    cout<<counter+1<<"\n";
    else
    cout<<-1<<"\n";


    return 0;


}
