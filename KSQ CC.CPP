
#include<bits/stdc++.h>

using namespace std;

int IsAnagram(std::string str1, std::string str2)
{
    if(str1.length() != str2.length())
        return 0;
    for(int i = 0; i < str1.length();i++)
    {
        int found = 0;
        int j = 0;
        while(!found && j < str2.length())
        {
            if(str1[i] == str2[j])
            {
                found = 1;
                str2[j] = NULL;
            }
            j++;
        }
        if(!found)
            return 0;
    }
    return 1;
}

int main()
{

int n;
cin>>n;

string s[n];
string str;

int i=-1;

while(++i<n)
{
	cin>>s[i];
}


while(++i<n)
{
	str+=s[0].
}

cout<<str;


return 0;


}

