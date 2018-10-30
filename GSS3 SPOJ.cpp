// i am implementing my own wooden tree for fun.
// problem is single updation and finding sum in range.

#include<bits/stdc++.h>

using namespace std;
int n=100;
int t[400];



void build (int a[], int v, int tl, int tr) {
	if (tl == tr)
		t[v] = a[tl];
	else {
		int tm = (tl + tr) / 2;
		build (a, v*2, tl, tm);
		build (a, v*2+1, tm+1, tr);
		t[v] = t[v*2] + t[v*2+1];
	}
}

int sum (int v, int tl, int tr, int l, int r)
{
	if(l>r)
		return 0;
	if(l == tl && r == tr )
		return t[v];
	int tm = (tl+tr)/2;

	return sum(v*2, tl, tm, l,min(r,tm))+sum (v*2+1,tm+1,tr,max(1,tm+1),r);
}


void update (int v , int tl , int tr, int pos, int new_val)
{
	if(tl==tr)
		t[v]=new_val;
	else
	{
		int tm = (tl+tr)/2;
		if(pos <= tm)
			update (v*2,tl,tm,pos,new_val);
		else
			update (v*2+1,tm+1,tr,pos,new_val);

		t[v]= t[v*2]+t[v*2+1];

	}
}

int main()
{
	int n;
	cout<<"enter size\n";
	cin>>n;

    int arr[n];

	for(int i=0;i<n;i++)
	cin>>arr[i];

    build(arr , 1 , 0, n-1);


    int tt;

    cout<<"no of times\n";
    cin>>tt;

	int query;

	while(tt--)
	{

    cout<<"\n1 for update \n2 for sum \n";
	cin>>query;

        if(query==1)
        {
            int newpos;
            int newval;
            cout<<"etr newpos , new val\n";
            cin>>newpos>>newval;

        update (1 , 0 , n-1, newpos, newval);

        }
        else
        {

        cout<<"enter l and r for sum \n";
        int l,r;
        cin>>l>>r;
        int pkp;
        pkp= sum (1, 0, n-1,l-1,r-1);

        cout<<"the sum is "<<pkp<<"\n";
        }
	}
return 0;


}
