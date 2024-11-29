#include<iostream>
using namespace std;
int main ()
{
	int year;
	cout<<"enter a random year = ";
	cin>>year;
	
	if((year%4==0 && year%100!=0 )
	  or (year%400==0 && year%100==0))
	cout<<"It's a leap year";
	else 
	cout<<"Not a leap year";
	
	return 0;
	
}