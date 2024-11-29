//Show bill and calculate elec consumed!
#include<iostream>
using namespace std;
int main()
{
	int uc;
	char cid[24];
	string name, addr;
	double Bill = 0.0;
	cout<<"Elec. Bill Calculator" <<endl;
	cout<<"Enter Customer ID : ";
	cin>>cid;
	cout<<"Enter Units consumed in watts : ";
	cin>>uc;
	if(uc<=200)
	{
		Bill = uc * 4.5;
	}
	else if (uc>200 and uc<=400)
	{
		Bill = uc * 5.5;
	}
	else if(uc>400 and uc<=600)
	{
		Bill = uc * 6.0;
		
	}
	else
	{
		Bill = uc*10.00;
	}
	
	cout<<"Customer ID : " <<cid <<"\n";
	cout<<" Electricity Bill : " <<Bill;


	
	
	return 0;
}