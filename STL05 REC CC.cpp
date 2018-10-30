// STL05 REC CC

#include<bits/stdc++.h>

#define ll long long int
using namespace std;


int main()
{

    ll t;

    scanf("%lld",&t);

    while(t--)
    {

        ll alreadyincls, toinsertinclass;

        scanf("%lld",&alreadyincls);
        scanf("%lld",&toinsertinclass);



/*  map < ll,ll > mp;

          ll tt;

        for(ll i=0; i<alreadyincls; i++)
        {
           scanf("%lld",&tt);
            mp.insert(pair<ll,ll>(tt,tt));
        }


        for(ll i = 0; i<toinsertinclass; i++)
        {

        scanf("%lld",&tt);


        map<ll,ll> ::iterator ite;

        ite = mp.find(tt);

            if(ite!=mp.end())
            printf("YES\n");
        else
            {
                printf("NO\n");
                mp.insert(pair<ll,ll>(tt,tt));
            }


        }
        }



*/
        set < int> s;

        ll tt;

        for(ll i=0; i<alreadyincls; i++)
        {

            scanf("%lld",&tt);

            s.insert(tt);

        }

        for(ll i = 0; i<toinsertinclass; i++)
        {
            scanf("%lld",&tt);

            if(s.count(tt)!=0)
                printf("YES\n");
            else
            {
                 printf("NO\n");
                s.insert(tt);
            }
        }



    }




return 0;

}
