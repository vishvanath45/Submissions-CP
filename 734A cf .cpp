#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int t;
	cin>>t;

	string s;
	cin>>s;
	int t2=t;
	t2=t-1;
	char c;
	int counta=0;
	int countb=0;
	while(t2>=0)
	{
		c=s[t2];

		if(c=='A')
		{
			counta++;
		}
		t2--;
	}


	countb=t-counta;

	if(counta>countb)
	cout<<"Anton\n";
	else if(countb>counta)
	cout<<"Danik\n";
	else
	cout<<"Friendship\n";




	return 0;
}
