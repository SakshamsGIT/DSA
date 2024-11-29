#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int a,b,c;
	a=0;
	b=1;
	while(c<=100)
	{
	c=a+b;
	cout<<  c <<"\t";
	a=b;
	b=c;
	
	
}
	return 0;
}