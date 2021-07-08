//734 B CF

#include <iostream>
using namespace std;

int main() {
	// your code goes here

	long long int two,three,five,six;

	cin>>two>>three>>five>>six;
	int min =-1;

	int sum=0;

	if(two<five)
	min=two;

	if(six<min)
	min=six;

	sum+=(min*256);

	two-=min;
	five-=min;
	six-=min;

	if(three<two)
	min=three;
	else
	min=two;

	sum+=(min*32);


	cout<<sum<<"\n";






	return 0;
}
