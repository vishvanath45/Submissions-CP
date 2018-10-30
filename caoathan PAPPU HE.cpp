//

#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

int main()
{

	int t;
	cin>>t;

	int arr[t];
	int stackcup=0;
	int temp,pp=0;
	for(int i=0;i<t;i++)
	{
	cin>>temp;
	if(temp==1)
	pp+=temp;
	else
	{
	stackcup=1;
	}

	}

	int fcup=0;
	int ecup=0;


	if(pp%2!=0)
	{
	fcup=pp/2;
	ecup=1;

	stackcup+=pp/2;

	}
	else
	{
	fcup=pp/2;
	stackcup+=pp/2;

	}

	if(stackcup>0)
	{
	stackcup=1;

	}


	int noofmoves=(ecup+fcup+stackcup);


    //cout<<ecup<<fcup<<stackcup<<"\n";
	if(noofmoves%2==0)
	{
	cout<<noofmoves/2<<"\n";
	}
	else
	{
	cout<<(noofmoves/2)+1<<"\n";
	}


}
