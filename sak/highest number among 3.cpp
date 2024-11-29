#include<iostream>
using namespace std;
int main()
{
	int x,y,z;
	cout<<"Enter three numbers either positive of negative = ";
	cin>>x>>y>>z;
	
	if (x>y && x>z)
	cout<<"highest number = " <<x;
	
	if (y>x && y>z)
	cout<<"highest number = " <<y;
	
	if(z>x && z>y)
	cout<<"highest number = " <<z;
	return 0;
}