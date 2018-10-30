// STL01 CC REC

#include<bits/stdc++.h>

#define ll long long int
using namespace std;


int main()
{
    ll ans;
    ll  t;
    cin>>t;

    while(t--)
    {

    int ans =1;

    string s;

    cin>>s;

     stack<char> st;


	for (int i = 0; i < s.length(); i++)
	{
		if ((s[i] == '(') || (s[i] == '{') || (s[i] == '['))
		{
			st.push(s[i]);
		}
		else
		{
			if (st.empty())
				{
                    ans=0;

				}
			else
			{
				if (abs(st.top() - s[i]) > 2)  // ASCII code having diff not more than 2 ;-)
                {
                    ans =0;
                }
				else
				{
					st.pop();
				}
			}
		}


		if(ans==0)
		break;
	}
	if (!st.empty()||ans==0)
		cout<<"NO\n";
	   else
        cout<<"YES\n";



    }
    return 0;

}

