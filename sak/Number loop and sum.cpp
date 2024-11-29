#include<iostream>
using namespace std;
int main()
{
	int x=1;
	int sum=0;
	int c=0;
	

	while(x!=0)
	{
		cout<<"Enter numbers & Enter 0 to stop";
		cout<<"Number -";
		cin>>x;
		sum+=x;
		c++;
	}
	cout<<"No of inputs  "<<c<<endl;
	cout<<"sum of entered values "<<sum;
	
	
	return 0;
}