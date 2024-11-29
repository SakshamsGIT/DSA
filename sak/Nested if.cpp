#include<iostream>
using namespace std;
int main()
{
	//college eligibility 
	string name;
	int cbse, cuet;
	cout<<"Name of the student :";
	cin>>name;
	cout<<"12th Board % = ";
	cin>>cbse;
	cout<<"Cuet Score = ";
	cin>>cuet;
	bool ff;
	cout<<"Form T/F : ";
	cin>>ff;
	if(cbse>60)
	{
		if(cuet>500)
		{
		 if(ff)
		 {
		   cout<<"Eligible";
		}
		else
		{
			cout<<" Not eligible";
		}

}
else
{

cout <<"Not eligible";
}

}
else
{
cout <<"Not eligible";
}

	
	
	
	return 0;
}