#include<stdio.h>
int main()
{
/*	int i,isPrime=1,n;
	printf("Enter a number to check whether it is prime or not:");
	scanf("%d",&n);
	if(n<=1)
	isPrime=0;
	else
	{
		for(i=2;i<=n/2;i++)
		{
			if(n%i==0)
			{
				isPrime=0;
				break;
			}
		}
	}
	if(isPrime)
	{
		printf("%d is a prime number\n",n);
		
	}
	else
	{
		printf("%d is not prime num",n);
	}
	
	
	return 0;
}*/
/*int n,i,sum=0,prod=1;
	printf("enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum+=i;
		prod*=i;
	}
	printf("The sum of number =%d\n",sum);
	printf("The prod of number=%d\n",prod);
}*/
int a,b,c,greatest;
printf("Enter 1st number:");
scanf("%d",&a);
printf("Enter 2nd number:");
scanf("%d",&b);
printf("Enter 3rd number:");
scanf("%d",&c);
greatest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
printf("The greatest number is: %d\n",greatest);
return 0;
}