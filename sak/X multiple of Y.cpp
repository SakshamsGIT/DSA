#include<iostream>
using namespace std;
int main ()
{
	int x,y;
	cout<<"Enter 1st number(x) = ";
	cin>>x;
cout<<"Enter 2nd number(y) = ";
	cin>>y;
	
	if (x%y==0)
	cout<<"X is a multiple of Y";
	
	else
	cout<<"X isn't a multiple of Y";
	
	return 0;
}