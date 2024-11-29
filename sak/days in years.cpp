#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
	int days;
	cout<<"enter number of days = " ;
	cin>>days;
	int months= days/30;
	days=days%30;
	int years=months/12;
	months=months%12;
	cout<<"YEARS" <<"\t" <<"MONTHS" <<"\t" <<"DAYS" <<endl;
 
	cout<<years <<"\t" <<months <<"\t" <<days <<"\t";
	
	
	
	return 0;
}