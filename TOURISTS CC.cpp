//TOURISTS CC

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int arr[100001]={0};
	int links[m][2];



	int natraj[10000]={0};
	int rand1,rand2;


	int p=0;

	while(p<m)
	{
		int xx;
		int yy;
		cin>>xx>>yy;
		arr[xx-1]=1;
		arr[yy-1]=1;
		links[p][0]=xx;
		links[p][1]=yy;

		p++;
	}

		if(n==1)
	{
			cout<<"NO\n";
		return 0;
	}

	int sum=0;

	for(int i=0;i<n;i++)
		sum+=arr[i];

	if(sum!=n)
	{
		cout<<"NO\n";
		return 0;

	}

	int pqp=1;
	int tempp=0;

	int counter=0;

	while(pqp==1)
	{

	//cout<<"current values "<<links[tempp][0]<<" "<<links[tempp][1]<<"\n";
		if((tempp<m-1)&&links[tempp][1]==links[tempp+1][0])
		{
			tempp++;
		}
		else if((tempp<m-1)&&links[tempp][1]==links[tempp+1][1])
		{
			int exchange;
			exchange=links[tempp+1][1];
			links[tempp+1][1]=links[tempp+1][0];
			links[tempp+1][0]=exchange;
			tempp++;
		}
		else
		{
			if(tempp==m-1)
			{
				counter=1;
				pqp=0;
				  // ha theek h ban raha answer 1 hoga
			}
			else
			{
				counter=-1;
				pqp=0;   // nahi ban raha poora ans no hoga
			}
		}
	}

	if(counter==-1)
	{
		cout<<"NO\n";
		return 0;

	}

	p=0;

	while(p<m)
	{

		rand1=links[p][0];
		rand2=links[p][1];

		rand1=(rand1*10)+rand2;

		if(natraj[rand1]==0)
		{
			natraj[rand1]=1;
		}
		else
		{
			cout<<"NO\n";
			return 0;
		}


		p++;
	}





		p=0;

		int memes[1000]={0};

		while(p<m)
		{
		int dank=links[p][0];
		memes[dank-1]+=1;
		dank=links[p][1];
		memes[dank-1]+=1;
		p++;
		}

		int sumre=0;
		for(int rt=0;rt<n;rt++)
		{
		sumre+=memes[rt];
		}

		if(sumre!=2*n)
		{
        cout<<"NO\n";
			return 0;
		}


		cout<<"YES\n";
		p=0;

	while(p<m)
	{

		cout<<links[p][0]<<" "<<links[p][1];
		cout<<"\n";

		p++;
	}

	return 0;


}











































/*
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin>>n>>t;
    int city[100001]= {0};


    int md[1000]= {0};


    int counter=0;
    int arr[t][2];
    int i=-1;
    int zz,cc;
    while(++i<t)
    {
        cin>>zz>>cc;
        arr[i][0]=zz;
        arr[i][1]=cc;
        city[zz-1]=1;
        city[cc-1]=1;

    }
        int l=0;
        int p=1;
        while(p==1)
        {

            if(arr[l][1]==arr[l+1][0]&&(l<t-1))
            {
                l++;
            }
            else if(arr[l][1]==arr[l+1][1]&&(l<t-1))
            {
                //swap
                int temp=arr[l+1][0];
                arr[l+1][0]=arr[l+1][1];
                arr[l+1][1]=temp;
                l++;
            }
            else
            {
                if(l==t-1)
                    p=0;
                else
                    p=-1;

            }

        }


        if(p==-1||arr[0][0]!=arr[t-1][1])
        {
            cout<<"NOeee\n";
            return 0;
        }

        int summ=0;
        for(int yy=0; yy<n; yy++)
            summ+=city[yy];




        if(summ!=n)
        {
            cout<<"NOwww\n";
            return 0;
        }

        i=-1;

        while(++i<t)
        {
            int uu =arr[i][0];
            int ttt=arr[i][1];

            ttt=10*uu+ttt;
            if(md[ttt]==0)
            {
                md[ttt]=1;
            }
            else
            {
                cout<<"NO\n";
                return 0;

            }
        }



        cout<<"YES\n";
        i=-1;

        while(++i<t)
        {
            cout<<arr[i][0]<<" "<<arr[i][1]<<"\n";

        }
}
*/
