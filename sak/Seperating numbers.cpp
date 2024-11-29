#include <iostream>
#include<math.h>
using namespace std;
int main()
{
	int x=1,n,p=0,nc=0,z=0;
	while(x<=20)
	{
		cout<<"enter any random integer = ";
		cin>>n;
		if(n>0)
		{
			p = p+1;
		
		}
		if(n<0)
		{
			nc = nc+1;
		
		}
		if(n==0)
		{
			z = z+1;
			
		}
		x=x+1;
		
		
	}
    cout<<"No of +ve numbers is"<<p<<endl;
	cout<<"No of -ve numbers is"<<nc<<endl;
	cout<<"No of zeros is"<<z<<endl;
	
	
	return 0;
}