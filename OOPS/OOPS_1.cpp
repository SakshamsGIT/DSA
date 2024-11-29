#include<iostream>
#include<string.h>
using namespace std;
class person
	{
		private: int erp_id;   //instance variable
				 int age;
				 string name;
				 char phn_no[10];
				 string gender;
				 static string city; // static variable
				 float salary =120000; 
				
		public: void AddEmp();
				void Display();	
				
				void Allowances() 
				{
					float hra=salary*0.25; //LOCAL VARIABLE
					cout<<"HRA RS. "<<hra<<endl;	
				}		
			void SetEmp(int erpid,int age,string name,char phnno[10],string gender)//METHOD FUNCTION
			{
					erp_id=erpid;
					this->age=age;
					this->name=name;
					strcpy(phn_no,phnno);
					this->gender=gender;
			}	 
	};
void person::AddEmp()
	{
		cout<<"Enter your name:";
		cin>> name;
		cout<<"Enter erp id:";
		cin>> erp_id;
		cout<<"Enter your age:";
		cin>> age;
		cout<<"Enter Gender:";
		cin>> gender;
		cout<<"Enter contact number:";
		cin>> phn_no;
	
	}
void person::Display()
	{
		cout<<"\n**employee's personal details **"<<endl;
		cout<<"Name-"<<name<<endl;
		cout<<"ERP ID-"<<erp_id<<endl;
		cout<<"Age-"<<age<<endl;
		cout<<"Gender-"<<gender<<endl;
		cout<<"Contact Number-"<<phn_no<<endl;
		cout<<"City-"<<city<<endl;
		cout<<"Peson Salary-"<<salary<<endl;
		
	}
	
string person::city="New Delhi";
int main()
	{
		person p1;
		p1.	AddEmp();
		p1.	Display();
		p1. Allowances();
		
		person p2;
		p2. SetEmp(1234,18,"Eshaan","455656566","Male");
		p2. Display();
		return 0; 
	}