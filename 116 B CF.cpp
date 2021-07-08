// 116 B CF

#include<bits/stdc++.h>

using namespace std;

#define ll int

int main()
{

    ll r,c;
    cin>>r>>c;

    ll arr[r][c];

    ll vc[c*r]= {0};
    ll vr[r*r]= {0};

    char ch;
    ll noofw=0;
    for(ll i=0; i<r; i++)
        for(ll j=0; j<c; j++)
        {
            cin>>ch;
            //cout<<"current i and j are "<<i<<" "<<j<<"\n";
            if(ch=='P')
                arr[i][j]=-1;
            else if(ch=='.')
                arr[i][j]=0;
            else
            {
                arr[i][j]=1;

                //cout<<"i and j of wolf are "<<i<<" "<<j<<"\n";
                vc[noofw]=j;
                vr[noofw]=i;
                noofw++;
            }
        }

        ll tpigs=0;

        for(ll i=0;i<noofw;i++)
        {
        ll row= vr[i];
        ll col= vc[i];


        ll rowup= row-1;
        ll rowdwn =row+1;
        ll colrgt=col+1;
        ll collft=col-1;



        if(rowup>=0&&arr[rowup][col]==-1)
        {
        arr[rowup][col]=0;
        tpigs+=1;
        }
        else if(rowdwn<r&&arr[rowdwn][col]==-1)
        {
        arr[rowdwn][col]=0;
        tpigs+=1;
        }
        else if(colrgt<c&&arr[row][colrgt]==-1)
        {
      //  cout<<"case 3\n";
        arr[row][colrgt]=0;
        tpigs+=1;
        }
        else if(collft>=0&&arr[row][collft]==-1)
        {
        //cout<<"case 4\n";
        arr[row][collft]=0;
        tpigs+=1;
        }

        }








        cout<<tpigs<<"\n";





    return 0;

}
/*ll r,c;
cin>>r>>c;

vector<ll>vr(r);
vector<ll>vc(c);

ll arr[r][c];

ll noofw=0;

char ch;
for( ll i=0;i<r;i++)
{
	for(ll j=0;j<c;j++)
	{
		cin>>ch;
		if(ch=='W')
		{
		arr[i][j]=1;
		}
		else if(ch=='.')
		{
		arr[i][j]=0;
		}
		else
		arr[i][j]=-1;

		if(arr[i][j]==1)
		{
		cout<<"push in "<<i<<" "<<j<<" &&&&\n";
			vr.push_back(i);
			vc.push_back(j);
			noofw++;
		}
	}
}

ll tpigs=0;

cout<<"no of wolf"<<noofw<<"\n";
for(ll k=0;k<noofw;k++)
{
	cout<<"***\n";

	ll row=vr[k];
	ll col=vc[k];

	ll rup=row-1;
	ll rdwn=row+1;

	ll crht= col+1;
	ll clft= col-1;



    cout<<"row is "<<row<<"\n";
    cout<<"coloum is "<<col<<"\n";


for( ll i=0;i<r;i++)
{
	for(ll j=0;j<c;j++)
	cout<<arr[i][j]<<" ";
    cout<<"\n";
}


	if(rup>=0&&(arr[rup][col]==-1))
	{

            cout<<"case 1"<<rup<<" "<<col<<"\n";
			arr[rup][col]=0;
			tpigs++;

	}

	else if(rdwn<r&&(arr[rdwn][col]==-1))
	{

            cout<<"case 2"<<rdwn<<" "<<col<<"\n";
			arr[rdwn][col]=0;
			tpigs++;
	}

	else if(clft>=0&&(arr[row][clft]==-1))
	{
            cout<<"case 3"<<row<<" "<<clft<<"\n";
			arr[row][clft]=0;
			tpigs++;

	}

	else if(crht<c&&(arr[row][crht]==-1))
	{
            cout<<"case 4"<<row<<" "<<crht<<"\n";
			arr[row][crht]=0;
			tpigs++;

	}


}



cout<<tpigs<<"\n";


for( ll i=0;i<r;i++)
{
	for(ll j=0;j<c;j++)
	cout<<arr[i][j]<<" ";
    cout<<"\n";
}

return 0;



}
*/
