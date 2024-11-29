//area of scalar triangle
#include<iostream>
#include<math.h>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c,A,s;
	
	cout<<"enter sides of the triangle = ";
	cin>>a>>b>>c;

	s = (a+b+c)/2;
	double area=double(sqrt(s*(s-a)*(s-b)*(s-c)));
	
	cout<<"Area of the triangle = " <<area<<endl;
	
	
	
	
	return 0;
}