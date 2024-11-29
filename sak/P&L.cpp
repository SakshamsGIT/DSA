#include<iostream>
using namespace std;
int main ()
{
	int sp,cp;
	cout<<"Enter cost price = ";
	cin>>cp;
	cout<<"Enter selling price = ";
	cin>>sp;
	
	if(cp>sp)
	cout<<"Incurred Loss";
	
	else
	cout<<"Incurred Profit";
	
	
	return 0;
}