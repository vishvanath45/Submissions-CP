// CANDY123 CC

#include<bits/stdc++.h>

using namespace std;

int main()

{

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif
    
int t;

cin>>t;

while(t--)
{
int l,b;
cin>>l>>b;

int lb = sqrt(l);

int bb =(sqrt(1+4*b)-1)/2;

if(lb==bb)
cout<<"Bob\n";
else if(lb<bb)
cout<<"Bob\n";
else
cout<<"Limak\n";

}


return 0;

}
