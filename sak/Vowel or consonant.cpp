#include<iostream>
using namespace std;
int main ()
{
	char a;
	cout<<"Enter an alphabet - ";
	cin>>a;
	
	if ( a=='a' || a=='e' ||a=='i' ||a=='o' ||a=='u' || a=='A' || a=='E' ||a=='I' ||a=='O' ||a=='U')
	cout<<"Given Alphabet is a vowel";
	
    else
	cout<<"Given Alphabet is an Consonant";
	
	
	return 0;
	
}