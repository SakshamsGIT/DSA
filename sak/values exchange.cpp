#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	//using 3rd variable
 int x = 10, y = 20, z;
 cout<<"value of x = " <<x <<endl;
 cout<<"value of y = "<<y <<endl;
 z = x;
 x = y;
 y = z;
 cout<<"value of x = " <<x <<endl;
 cout<<"value of y = "<<y <<endl;
}