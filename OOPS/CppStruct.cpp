#include <iostream>

using namespace std;

struct Person
{
	int id;
	string name;
	int age;
};

int main()
{
	Person p1={1,"Saksham",18},p2={},p3={}, *p4;
	
	p4=&p1;
	
	cout<<"Person 1 "<<p1.id<<"\t"<<p1.name<<"\t"<<p1.age<<endl;
	cout<<"Person 1 "<<p4->id<<"\t"<<p4->name<<"\t"<<p4->age<<endl;
	
	p4->age=21;
	
	cout<<"Person 1 "<<p1.id<<"\t"<<p1.name<<"\t"<<p1.age<<endl;
	cout<<"Person 1 "<<p4->id<<"\t"<<p4->name<<"\t"<<p4->age<<endl;

	
	return 0;
	
}