#include <iostream>
using namespace std;
int main()
{
	int x,y;
	cout<<"Enter a number for its multiplication table = ";
	cin>>x;
	y=1;
	while(y<=100)
	{
		
		cout<<x<<"*"<<y<<"= " <<x*y <<"\n";
		y=y+1;
	}
	
	return 0;
}