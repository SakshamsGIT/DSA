#include<stdio.h>
#include<conio.h>
int main()
{
	int a=10;
	LABEL:
		if(a<=20)
		{
		printf("The value of a=%d\n",a);
		a++;}
		goto LABEL;
		return 0;
}