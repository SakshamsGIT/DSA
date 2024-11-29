#include<iostream>
#define SIZE 100
using namespace std;
class Array
{
	private:
		int data[SIZE];
		int n;
		float sum;
	public: void input()
	{
		cout<<"Enter array size :";
		cin>>n;
		for(int i=0;i<n;i++)
		{
			cout<<"Enter data :";
			cin>>data[i];
		}
	}
	void ShowData()
	{
	cout<<"\n\n\n";
	for(int i=0;i<n;i++)
		{
			cout<<data[i]<<"  ";
		}	
	}
	void Total()
	{
		sum=0;
		for(int i=0;i<n;i++)
		{
		sum+=data[i];
		}
		cout<<"\nThe sum of all the data in the array is-"<<sum<<endl;
	}
	void Avg()
	{
		float avg=sum/n;
		cout<<"\nAverage of data:"<<avg<<endl;
	}
	void Max()
	{
		int large=0;
		int i;
		for(i=0;i<n;i++)
		{
		if(data[i]>large)
		large=data[i];
		}
		cout<<"Maximum value:"<<large<<endl;
	}
	void Min();
	
};
void Array:: Min()
	{
		int i;
		int small=data[0];
		for(i=0;i<n;i++)
		{
		if(data[i]<small)
		small=data[i];
		}
		cout<<"Minimum value:"<<small<<endl;
	}

int main()
{
	Array a;
	a.input();
	a.ShowData();
	a.Total();
	a.Avg();
	a.Max();
	a.Min(); 
	return 0;
}