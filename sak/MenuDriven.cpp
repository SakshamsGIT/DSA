#include<iostream>
using namespace std;
int main()
{
	cout<<"***************SAROJINI NIGGER***************";
	cout<<"******MENU*******"<<endl;
	cout<<"  1 : edgy anime shirts --- Rs. 1299.00" <<endl;
	cout<< " 2 : COOL MERCH --- Rs. 999.00 " <<endl;
	cout<< " 3 : LUBE --- Rs. BILLION DOLLAR BB "<<endl;
	cout<< " 4 : GLEAMING rings --- Rs. Undefined amount (Rs. 1999) " <<endl;
	
	cout<<"****************************\n";
	int sn,qty,p;
	long bill;
	cout<<"Enter Item choice : ";
	cin>>sn;
	switch(sn)
	{
		case 1:
			    cout<<"Enter the qty of your item : ";
			cin>>qty;
			bill = qty*1299.00;
			cout<<"Total Bill Rs."<<bill<<endl;
			break;
			case 2:
			    cout<<"Enter the qty of your item : ";
			cin>>qty;
			bill = qty*999.00;
			cout<<"Total Bill Rs."<<bill<<endl;
			break;
			case 3:
				cout<<"Enter the qty of your item : ";
			cin>>qty;
			bill = qty*100000000.00;
			cout<<" WOOHOOO BINGOO!!!!" <<endl;
			cout<<"Total Bill Rs."<<bill<<endl;
			break;
			case 4:
				cout<<"Enter the qty of your item : ";
			cin>>qty;
			bill = qty*1999.00;
		
			cout<<"Total Bill Rs."<<bill<<endl;
			break;
			default :
				cout<<"N/A";
			break;
			
	}
	 
	
	
	
	return 0;
}