#include <iostream>
using namespace std;
#include<algorithm>


int main()
{
	int t,arr[1000001];
	cin>>t;
	while(t--)
	{
	    int l;
	    cin>>l;
	    int ttt=l;
        int xyz=0;
        while(xyz<l)
	    cin>>arr[xyz++];

	    int ppp=0;
	    sort(arr,arr+l);

	    int answer=l;

	    if(arr[0]==arr[l-1])
	    {
	    answer=0;
	    }
	    else if(arr[0]==1)
	    {
	    answer-=1;
	    }
	   /* int max=arr[0];
	    int i=1;
	    while(i<l)
	  {
	      if(max==arr[i])
	      {
	          ppp++;
	          i++;
	      }
	      else if(max<arr[i])
	      {
	          max=arr[i];
	          i++;
	      }



	  }

	  cout<<ttt-ppp<<"\n";
	  */
	  cout<<answer<<"\n";

	}
	return 0;
}



