// HORRIBLE SPOJ

#include<bits/stdc++.h>

#define ll long long int


using namespace std;


int n=1000001;
int t[4000004];


/*
6
1 2 3 4 5 6
*/


void build (int a[], int v, int tl, int tr)
{
    if (tl == tr)
        t[v] = a[tl];
    else
    {
        int tm = (tl + tr) / 2;
        build (a, v*2+1, tl, tm);
        build (a, v*2+2, tm+1, tr);
        t[v] = t[v*2+1] + t[v*2+2];
    }
}

int sum (int v, int tl, int tr, int l, int r)
{
    if(l>r)
        return 0;
    if(l == tl && r == tr )
        return t[v];
    int tm = (tl+tr)/2;

    return sum(v*2+1, tl, tm, l,min(r,tm))+sum (v*2+2,tm+1,tr,max(l,tm+1),r);
}


void update (int v, int tl, int tr, int l, int r, int add)
{
    if (l > r || tl>r||tr<l)
        return ;
    if (tl == tr)
     {
      t[v]+= add;
        return;
    }
    int tm = (tl + tr) / 2;
    update (v*2+1, tl, tm, l, min(r,tm), add);
    // t[v]= t[v*2+1]+t[v*2+2];

    update (v*2+2, tm+1, tr, max(l,tm+1), r, add);

    t[v]= t[v*2+1]+t[v*2+2];

}

int main()
{

    int t;
    cin>>t;

    while(t--)
    {
    ll n;
    scanf("%lld",&n);
    int arr[n]= {0};
    build(arr, 0, 0, n-1);
    ll tt;
    scanf("%lld",&tt);

    ll query;

    while(tt--)
    {
    scanf("%lld",&query);

        if(query==0)
        {
            ll newp;
            ll newq;
            ll toadd;
    scanf("%lld",&newp);
        scanf("%lld",&newq);
            scanf("%lld",&toadd);


          /* cout<<"b4 updte\n";
            for(int i=0;i<4*n;i++)
                cout<<t[i]<<"* ";
                cout<<"\n";
            */

            update (0, 0, n-1, newp-1, newq-1, toadd);

            /* cout<<"after updte\n";
            for(int i=0;i<4*n;i++)
                cout<<t[i]<<"* ";
                cout<<"\n";
            */

        }
        else
        {
            ll l,r;
                scanf("%lld",&l);
                    scanf("%lld",&r);

            ll pkp;
            pkp= sum (0, 0, n-1,l-1,r-1);
                printf("%lld",pkp);
        }
    }



    }
    return 0;


}
