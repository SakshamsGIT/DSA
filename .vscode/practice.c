#include<stdio.h>
int main()
{
int a,num1,num2;
printf("Enter 1 to add two numbers\n ");
printf("Enter 2 to subtract two numbers\n");
printf("Enter 3 to multiply two numbers\n");
printf("Enter 4 to cube a number\n");
printf("Enter Your choice:");
scanf("%d",&a);
switch (a)
{
case 1:printf("Enter number 1:");
		scanf("%d",&num1);
		printf("Enter number 2:");
		scanf("%d",&num2);
		printf("The sum is:%d",num1+num2);
		break;
case 2:printf("Enter number 1:");
		scanf("%d",&num1);
		printf("Enter number 2:");
		scanf("%d",&num2);
		printf("The difference is:%d",num1-num2);
		break;
case 3:printf("Enter number 1:");
		scanf("%d",&num1);
		printf("Enter number 2:");
		scanf("%d",&num2);
		printf("The product is:%d",num1*num2);
		break;
case 4:printf("Enter your number");
		scanf("%d",&num1);
		printf("The Cube is:%d",num1*num1*num1);
		break;		
}
return 0;
}