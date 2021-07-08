//476 B CF

#include<bits/stdc++.h>

using namespace std;

int pos1,neg1,pos2,neg2,uncertain;

long combi(int n,int k)
{
    long ans=1;
    k=k>n-k?n-k:k;
    int j=1;
    for(;j<=k;j++,n--)
    {
        if(n%j==0)
        {
            ans*=n/j;
        }else
        if(ans%j==0)
        {
            ans=ans/j*n;
        }else
        {
            ans=(ans*n)/j;
        }
    }
    return ans;
}


int main()
{

#ifndef ONLINE_JUDGE
    // for getting input from input.txt
    freopen("input.txt", "r", stdin);
    // for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif	

string s1,s2;

cin>>s1>>s2;

for(int i =0 ;i<s1.length();i++)
{
	if(s1[i]=='+')
		pos1++;
	else
		neg1++;
}

for(int i =0;i<s2.length();i++)
{
	if(s2[i]=='+')
		pos2++;
	else if(s2[i]=='-')
		neg2++;
	else
		uncertain++;
}


if(pos2>pos1||neg2>neg1)
{
	cout<<"0.00000000000\n";
	return 0;
}

int posreq= pos1-pos2;
int negreq= neg1-neg2;

int max = (posreq>negreq?posreq:negreq);

int answer = combi(uncertain,max);
//cout<<"max "<<max<<"\n";

//cout<<"combi "<<combi<<"\n";



double deno= pow(2,uncertain);

//cout<<"power "<<deno<<"\n";

float ans2= (float)answer/(float)deno;



printf("%.9f\n",ans2 );


return 0;


}