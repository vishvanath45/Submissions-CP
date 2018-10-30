//FGFS CC

/*==============================================
A programmer started to cuss,
'cause getting to sleep was a fuss.
As he lay there awake in his bed,
Looping around and 'round in his head,
Was: while(!asleep()) sheep++;
==============================================*/

#include<bits/stdc++.h>

using namespace std;


int main()
{

    int n;
    int k,st,et,pref;
    cin>>n>>k;

    int pos[k]= {0};
    vector< pair<int,int> >v[k];

    int i=-1;
    while(++i<n)
    {
        cin>>st;
        cin>>et;
        cin>>pref;
        v[pref-1].push_back(make_pair(et,st));


    }
    i=-1;

    while(++i<k)
    {
        sort(v[i].begin(),v[i].end());
    }
    int count=0;

    int temp;
    int size;
    i=-1;
    while(++i<k)
    {
        size=v[i].size();
            }


}
