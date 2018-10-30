//codethon nit bhopal
#include<bits/stdc++.h>
// ho gaya 100 points
using namespace std;
int main()
{




int size,q;

cin>>size;
cin>>q;

string str;
cin>>str;

int freqarr[26]={0};
int arr[size];

int tch;
for(int i=0;i<size;i++)
{
tch=str[i];
arr[i]=tch;
freqarr[tch-65]+=1;
}


int qtype,pos;
char charchange;

for(int i=0;i<q;i++)
{

cin>>qtype;

if(qtype==1)
{
	cin>>pos;
	cin>>charchange;

	int temppos=arr[pos-1];
	freqarr[temppos-65]-=1;
	temppos=int(charchange);
	arr[pos-1]=temppos;
	freqarr[temppos-65]+=1;

}
else
{
int qposl;
cin>>qposl;

int sum=0;



for(int kk=0;kk<26;kk++)
{
	sum=sum+freqarr[kk];
	//cout<<sum<<"^";

	if(sum>=qposl)
	{
       // cout<<"shit ";

        char cf=kk+65;
		cout<<cf<<"\n";
		break;




	}
}

}




}


return 0;




}




