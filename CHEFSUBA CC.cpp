//CHEFSUBA CC

#include<bits/stdc++.h>

using namespace std;
#define ll long long 
int main()
{

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt","r", stdin);
    // for writing output to output.txt
    freopen("output.txt","w", stdout);
#endif

int size , fsize, query;

scanf("%d%d%d",&size,&fsize,&query);


int arr[2*size];

for(int i =0 ;i<size;i++)
{
	int pkp;
	cin>>pkp;
	arr[size-i-1]=pkp;
	arr[2*size-i-1]=pkp;
}

// for(int i = 0;i<2*size;i++)
// cout<<arr[i]<<" ";
// cout<<"\n";

int sumarr[2*size+1];

sumarr[0]=0;
sumarr[1]=arr[0];

for(int i=2;i<=2*size;i++)
{
	sumarr[i]=sumarr[i-1]+arr[i-1];
}

// for(int i = 0;i<2*size+1;i++)
// cout<<sumarr[i]<<" ";
// cout<<"\n";



int ansarr[size+1]={0};

int pop=0;

int k = fsize;


for(int i =0;i+k<2*size+1;i++)
{
	ansarr[pop]=abs(sumarr[i+k]-sumarr[i]);
	pop++;
}



// for(int i = 0;i<2*size;i++)
// cout<<ansarr[i]<<" ";


string s;
cin>>s;


query= s.size();


int current_rotation =0;

int searchbegin=0;
int searchends=size-k;

int fansarr[2*size];
memset(fansarr, -1, 2*size*sizeof(fansarr[0]));


for(int i =0;i<query;i++)
{
	if(s[i]=='!')
	{
		current_rotation++;

	}
	else 
	{
		
	
	int posshifted=current_rotation%size;

	//max(searchbegin+posshifted,searchends+posshifted)
	if(fansarr[posshifted]==-1)
	{
	int newsearchrangebegin= searchbegin+posshifted;
	int newsearchrangeends = searchends+posshifted;

	int fans=0;

	for(int h=newsearchrangebegin;h<=newsearchrangeends;h++)
	{
		if(ansarr[h]>fans)
		{
			fans=ansarr[h];
		}
	}
	fansarr[posshifted]=fans;
	printf("%d\n",fans);
	}
	else
	printf("%d\n",fansarr[posshifted]);

}

}






return 0;
}

