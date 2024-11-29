#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	//Exchanging number without using 3rd variable
	int x,y;
	cout<<"Enter the value of 1st variable = ";
	cin>>x;
	cout<<"Enter the value of 2st variable = ";
    cin>>y;
    x = x+y;
    y = x-y;
    x = x-y;
    
    cout<<"Value of x after exchange = " <<x <<endl;
    
    cout<<"Value of y after exchange = " <<y <<endl;
    

	
	
	return 0;
}