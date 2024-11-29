#include<iostream>
using namespace std;
int main()
{
	int x=28, j=1;
	while(j<=x)
	{
		if(x%j==0)
		cout<<j<<"\t"<<endl;
		j++;
	}

	
	return 0;
}