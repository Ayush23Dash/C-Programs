#include<conio.h>
#include<stdio.h>
void factorial(long num)
	{
	
	long fact=1,i;
	for(i=1;i<=num;i++)
	{
		fact *= i;
	}
printf("The factorial of the number is %d\n",fact);
}
int main()

{
	long num,ch;
	
	
printf("Enter the number to get the factorial ");
scanf("%d",&num);
factorial(num);

do{
	printf("Want to have factorial of more numbers?(1/0) ");
	scanf("%d",&ch);
	if(ch==1)
	{
		printf("\nEnter the number");
		scanf("%d",&num);
		factorial(num);
	}
	else if(ch==0)
	printf("Bye...");
	else
	printf("\nEnter a valid choice(1/0)\n");
}while(ch!=0);
	return 0;
}

