#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
	int sec;
	cout<<"enter seconds = ";
	cin>>sec;
	int days;
	
	int minutes= sec/60;
	sec=sec%60;
	int hours= minutes/60;
	minutes=minutes%60;
	days=hours/24;
	hours=hours%24;
	cout<<days <<"\t"; 
	cout<<hours<<"\t";
	cout<<minutes<<"\t";
	cout<<sec;
	
	return 0;
	
}