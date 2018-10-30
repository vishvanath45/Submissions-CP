// vjudge
#include<bits/stdc++.h>
using namespace std;

int main()
{

    #ifndef ONLINE_JUDGE
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
    #endif
    ios_base::sync_with_stdio(false);
int hash_string_a[256]={0};
int hash_string_b[256]={0};

string s1="AMITABH BACHCHAN ";
string s2="RAJNIKANTH";



int len1 = s1.length();
int len2 = s2.length();

for (int i = 0; i < len1; ++i)
{
	hash_string_a[s1[i]]=1;
}

for (int i = 0; i < len2; ++i)
{
	hash_string_b[s2[i]]=1;
}


for (int i = 0; i < 256; ++i)
{
	if(hash_string_b[i]==1&&hash_string_a[i]==1)
	{
		char ch = i;
        // ch = ch -'a'
		cout<<ch<<" ";
	}
}

return 0;
}

