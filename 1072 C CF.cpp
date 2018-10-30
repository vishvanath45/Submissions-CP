// 1072 C CF
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define Endl endl
#define mod  1000000007
#define mkp make_pair
#define pb push_back
#define sfl(n) scanf("%lld",&n)
#define pfl(n) printf("%lld\n",n)
#define sf(n) scanf("%d",&n)
#define pf(n) printf("%d\n",n)
#define bitget(n) __builtin_popcountll(n)

ll d1 , d2 ;
ll sum ;
vector < ll > day1 , day2 ;
 
int main(){
 
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    cin>>d1>>d2;
    sum = d1 + d2 ;

    ll flag = 0 ;
    if ( d1 > d2 ){
        flag = 1;
        swap( d1 , d2);
    }

    ll maxday , maxinoneday ;
 
    for ( maxday = 0 ; maxday * ( maxday + 1 ) <= sum*2 ; maxday++);
    maxday -- ;

 
    for ( maxinoneday = 0 ; maxinoneday * ( maxinoneday + 1 ) <= 2 * d2 ; maxinoneday++);
    maxinoneday--;
 
    ll diff = d2 - maxinoneday * ( maxinoneday + 1 )/2;
    ll currdiff = 0;
    while ( maxday )
    {
        currdiff = maxday - maxinoneday ;
        if ( maxday - maxinoneday < diff ){
            diff -= currdiff ;
            day2.push_back( maxday );
            maxday--;
            maxinoneday-- ;
            
        }
        else
        {
            break;
        }
 
    }

            int lastMax = maxinoneday + diff ;
            maxinoneday -- ;
 
            if ( lastMax )
                day2.push_back(lastMax);
 
            for ( int i = lastMax + 1 ; i <= maxday ;i++){
                day1.push_back(i);
            }
 
            for ( int i = lastMax - 1 ; i > maxinoneday ; i-- ){
                day1.push_back( i );
            }
            for ( int i = 1 ; i <= maxinoneday ; i++ ){
                day2.push_back( i );
            }
 
//     if ( flag == 1 ){
        
//     cout<<day2.size()<<"\n";
//     for(int i = 0; i < day2.size() ; i++)
//     {
//         cout<<day2[i]<<" ";
//     }

//      cout<<"\n";
//             cout<<day1.size()<<"\n";
//     for(int i = 0; i < day1.size() ; i++)
//     {
//         cout<<day1[i]<<" ";
//     }

//     }
//     else
//     {
 
//     cout<<day1.size()<<"\n";
//     for(int i = 0; i < day1.size() ; i++)
//     {
//         cout<<day1[i]<<" ";
//     }
//     cout<<"\n";

//     cout<<day2.size()<<"\n";
//     for(int i = 0; i < day2.size() ; i++)
//     {
//         cout<<day2[i]<<" ";
//     }
// }

ll ppp = 0;
ll ppp2 = 0;

for (ll i = 0; i < day1.size(); ++i)
{
    ppp += day1[i];
}

for (ll i = 0; i < day2.size(); ++i)
{
    ppp2 += day2[i];
}

cout<<ppp<<" "<<ppp2<<"\n";



    return 0;
}