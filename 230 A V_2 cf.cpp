//230 A V_2 cf

#include<stdio.h>
#include<algorithm>
using namespace std;
#include<iostream>
#include<vector>

bool placment( pair<int, int> p1, pair<int, int> p2)
{

        return (p1.first < p2.first);
}

int main()
{
int pow,t;


vector<pair<int,int> > v;

cin>>pow>>t;
int k=t;
int i=t;

int oppower,opgift;
while(t--)
{

cin>>oppower>>opgift;

v.push_back(make_pair(oppower,opgift));
}

sort(v.begin(), v.end(), placment);


int pop=0;
i=-1;
while(++i<k)
{

    if(pow>v[i].first)
    {
        pow+=v[i].second;
    }
    else
    {
      pop=1;
      break;
    }
}
if(pop)
    cout<<"NO\n";
    else
    cout<<"YES\n";

return 0;


}
