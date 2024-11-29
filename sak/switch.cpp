//days switch
#include<iostream>
using namespace std;
int main()
{
	int day;
	cout<<"Enter Day code : ";
	cin>>day;
	switch(day)
	{
		case 1:
			cout<<"Today is Monday";
			cout<<"Have a great day";
			break;
			case 2:
			cout<<"Today is Tuesday" <<"\n";
			cout<<"Have a great day";
			break;
			case 3:
			cout<<"Today is Wednesday";
			cout<<"Have a great day";
			break;
			case 4:
			cout<<"Today is Thursday";
			cout<<"Have a great day";
			break;
			case 5:
			cout<<"Today is Friday";
			cout<<"Have a great day";
			break;
			case 6:
			cout<<"Today is Satday";
			cout<<"Have a great day";
			break;
			case 7:
			cout<<"Today is Sunday";
			cout<<"Have a great day";
			break;
			
			default:
				cout<<"Invalid input ";
			break;
				
			
		}
	
	
	
	return 0;
}