// SCHEDULE CC v2

#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;

    while(t--)
    {
        string arr;
        ll k;
        ll sze;


        cin>>sze>>k;
        cin>>arr;

        ll daysze[1000000]= {0};

        ll dayszepos=0;

        ll preday=arr[0];

        ll daycounter=0;

        for(ll i=1 ; i<sze ; i++ )
        {
            if(arr[i]==preday)
            {
                daycounter++;
                //	cout<<i<<"#\n";
            }
            else
            {
                daysze[dayszepos]=daycounter+1;
                dayszepos++;
                daycounter=0;
                preday=arr[i];
                //	cout<<i<<"@\n";
            }

        }
        //dayszepos++;

//	cout<<"curr day counter "<<daycounter<<"\n";
        daysze[dayszepos]=daycounter+1;

        //for(ll i=0;i<=dayszepos;i++)
        //	cout<<daysze[i]<<"**";
// done beacuse it was counting from 0 not 1 sort function mai sze deni hoti h
        dayszepos++;



sort(daysze,daysze+dayszepos,greater<ll>());



if (toInsert < sortedVec.at(0)) sortedVec.insert(sortedVec.begin(), toInsert);
else if (toInsert > sortedVec.at(sortedVec.size()-1)) sortedVec.push_back(toInsert);
else {
    int minIndex = 0;
    int maxIndex = sortedVec.size();
    while (true) {
        int mid = (maxIndex+minIndex)>>1;
        if (toInsert == sortedVec.at(mid) || maxIndex-minIndex < 2) {
            sortedVec.insert(sortedVec.begin()+mid+1, toInsert);
            break;
        }
        else if (toInsert < sortedVec.at(mid)) maxIndex = mid;
        else if (toInsert > sortedVec.at(mid)) minIndex = mid;
    }
}



