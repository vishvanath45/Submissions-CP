// 837 B CF
#include<bits/stdc++.h>
using namespace std;


int main()
{


    int t;
    cin>>t;

    string str;
// for(int i =0 ;i<t;i++)
// cin>>arr[i];
    cin>>str;

    int arr[t]= {0};

    arr[0]=1;


    for(int i = 1 ; i < t; i++)
    {
        if(str[i]!=str[i-1])
        {
            arr[i]=arr[i-1]+1;
        }
        else
        {
            arr[i]=arr[i-1];
        }
    }

int maxx = arr[t-1];

cout<<min(t,maxx+2);
return 0;


//  vector<int> vec;

// //     // for(int i = 0 ; i< str.length(); i++)
// //     //   cout<<arr[i];

// //     //cout<<"***\n";
// //     int maxx = arr[t-1];

//      int currmaxlength=1;
//      int permaxlength=0;
//      int lastmax=0;
//     for(int i = 1 ; i< t; i++)
//     {
//         if(arr[i]==arr[i-1])
//         {
//             currmaxlength++;


//             if(currmaxlength>permaxlength)
//                 permaxlength=currmaxlength;

//         }
//         else
//         {
//             lastmax=currmaxlength;
//         vec.push_back(currmaxlength);

//         }

//     }



// int maxxx=0;

//     for(int i =0 ; i< vec.size();i++)
//     {
//         if(maxxx<vec[i])
//         {
//             maxxx=vec[i];
//         }

//     }


//     if(maxxx==2&&(maxx==vec[0]||maxx==vec[vec.size()-1]))
//     {
//         cout<<maxx+1;
//         return 0;
//     }
//     else
//     {
//         cout<<maxx+2;
//         return 0;
//     }




//     int ssize=vec.size();

//     if(ssize>=3)
//     {
//     for(int i = 2;i<ssize;i++)
//     {
//     if(vec[i]==2&&vec[i-2]==2)
//         {
//         cout<<maxx+2;
//         return 0;
//         }
//     }


//     }
//     //cout<<permaxlength<<"###\n";
//     if(permaxlength>=3)
//     {
//         cout<<maxx+2;
//         return 0;
//     }
//     else if(permaxlength==2)
//     {
//         cout<<maxx+1;
//         return 0;

//     }
//     else
//     {
//         cout<<maxx;
//         return 0;
//     }

    return 0;
}
