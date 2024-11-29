//convert celcius in fahrenhiet
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	float c;
	cout<<"Type temp in celcius = ";
	cin>>c;
	float f = ((9*c)/5)+32;
	cout<<"given temp in fahrenhiet = " <<f;
	
	return 0;
	
}