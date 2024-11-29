#include<iostream>
using namespace std;

class person
	{
		int id;
		string name; //IF NOT SPECIFIED PRIVATE IT AUTOMATICALLY BECOMES PRIVATE 
		float salary;
		public: person()  //default constructor
				{
				id= 101;
				name="Bhidu";
				salary=1000.00;
				}
				person(int id,string name,float salary)
				{
					this->id=id;
					this->name=name;
					this->salary=salary;
				}
				person(person &p)
				{
					id=p.id;
					name=p.name;
					salary=p.salary;
				}
		void Display()
			{
				cout<<"***PERSON DETAILS***"<<endl;
				cout<<"Id is-"<<id<<"\n"<<"Name-"<<name<<"\n"<<"Salary-"<<salary<<"\n"<<endl;
			}
	};
int main()
	{
		//THE BELOW PERSON DISPLAYS THE USE OF DEFAULT CONSTRUCTOR
		person p1;
		p1.Display();
		//THE BELOW PERSON DISPLAYS THE USE OF PARAMETERIZED CONSTRUCTOR
		person p2(702,"Circuit bhai",1500.00);
		p2.Display();
		//THE BELOW PERSON DISPLAYS THE USE OF COPY CONSTRUCTOR
		person p3(p2);
		p3.	Display();
	}