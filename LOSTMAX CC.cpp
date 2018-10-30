// LOSTMAX CC


#include<bits/stdc++.h>
using namespace std;
#define ll long long int

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


set<int> st;

while(t--)
{
int arr[1000];

int kk;

int i =0;
 
string str;

getline(cin, str);

while(cin>>ch)
{
arr[i]=kk;
i++;
st.insert(-1*kk);
}

set<int>::iterator it;

it = st.begin();
int val1 = *it;
it++;

int val2 = *it;

if(abs(val1)==i)
cout<<abs(val2)<<"\n";
else
cout<<abs(val1)<<"\n";


}

return 0;

}