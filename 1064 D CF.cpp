// 1064 D CF
#include<bits/stdc++.h>
using namespace std;
#define ll int
#define pb push_back    
#define mp make_pair
#define M (ll)(1e9+7)

char mat[2005][2005];
int pika[2005][2005];

ll r, c;
ll sx;
ll sy;

void rec(int x, int y, int maxr, int maxl)
{
    if(pika[x][y] == 1)
        return;

    if(mat[x][y] == '.')
        pika[x][y] = 1;

    if(y-1>=0 && maxl > 0)
    {
        if(mat[x][y-1] == '.')  
        {
            rec(x, y-1, maxr, maxl-1);
        }
    }

    if(y+1<c && maxr > 0)
    {
        if(mat[x][y+1] == '.')
        {
            rec(x, y+1, maxr-1, maxl);
        }
    }

    if(x-1 >= 0)
    {
        if(mat[x-1][y] == '.')
        {
            rec(x-1, y, maxr, maxl);
        }
    }

    if(x+1 < r)
    {
        if(mat[x+1][y] == '.')
        {
            rec(x+1, y, maxr, maxl);
        }
    }
}

int main()
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


cin>>r>>c>>sx>>sy;

ll maxl, maxr;

cin>>maxl>>maxr;

string str;

for(int i = 0 ; i < r ; i++)
{
    cin>>str;
    for (int j = 0; j < str.length(); ++j)
    {
        mat[i][j] = str[j];           
    }
}

rec(sx-1, sy-1, maxr, maxl);

ll ans = 0;

for(int i = 0 ; i < r ; i++)
{
    for(int j = 0; j < c ; j++)
    {
        //cout<<pika[i][j]<<"";
        if(pika[i][j] == 1)
            ans++;
    }
    //cout<<"\n";
}

cout<<ans;

return 0;
}





