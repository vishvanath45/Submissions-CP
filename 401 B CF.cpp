// 401 B CF

#include<bits/stdc++.h>


using namespace std;

int main()
{
    int n;

    cin>>n;

    string sher;
    string mor;

    cin>>sher;
    cin>>mor;

    int s[n];
    int s2[n];

    int m[n];
    int m2[n];

    for (int i = 0; i < n; i++)
    {
        s[i]=sher[i]-'0';
        s2[i]=s[i];
    }
    for (int i = 0; i < n; i++)
    {
        m[i]=mor[i]-'0';
        m2[i]=m[i];
    }

    int minmflicks;

    sort(s2,s2+n);
    sort(m2,m2+n);
    int minmflicks1=0;

    for(int i = 0; i<n; i++)
    {
    //cout<<s2[i]<<"$$"<<m2[i]<<"$$\n";
        if(s2[i]>m2[i])
            minmflicks1++;
    }

    int minmflicks2=0;

    sort(s2,s2+n,greater<int>());
    for(int i = 0; i<n; i++)
    {
    //cout<<s2[i]<<"%%%"<<m2[i]<<"$$\n";
        if(s2[i]>m2[i])
            minmflicks2++;
    }


    minmflicks=min(minmflicks1,minmflicks2);


    sort(s2,s2+n,greater<int>());
    sort(m2,m2+n);

    int maxsflicks=0;
        int maxsflicks1=0;
            int maxsflicks2=0;

    for(int i=0;i<n;i++)
    {
    if(s2[i]<m2[i])
    maxsflicks1++;
    }

    sort(s2,s2+n);

    for(int i=0;i<n;i++)
    {
    if(s2[i]<m2[i])
    maxsflicks2++;
    }

    int maxsflicks3=0;

    for(int i=0;i<n;i++)
    {
    int p = (i+1)%n;

    if(s2[i]<m2[p])
    maxsflicks3++;
    }



maxsflicks=max(maxsflicks1,maxsflicks2);

maxsflicks=max(maxsflicks,maxsflicks3);

    cout<<minmflicks<<"\n"<<maxsflicks<<"\n";

    return 0;
}
