#include<stdio.h>
#include<conio.h>
void fibonacci(int n)
{
	int i,sum=1,arr[20];
	arr[0]=1;
	arr[1]=1;
	printf("The Fibonacci Series upto %d places is:\n",n);
	printf("%d %d ",arr[0],arr[1]);
	for(i=2;i<n;i++)
	{
		arr[i]=arr[i-1]+arr[i-2];
		printf("%d ",arr[i]);
	}
}
 int main()
{
	int n,ch;
	printf("Till how much spaces do you want the Fibonacci Series?\n");
	scanf("%d",&n);
	fibonacci(n);
	do{
		printf("\nDo you want Fibonacci Series upto some other numerical places?(1/0)\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("Till how many places do you want the Fibonacci Series?\n");
			scanf("%d",&n);
			fibonacci(n);
		}
		else if(ch==0)
		{
			printf("Bye...");
		}
		else
		{
			printf("Enter the correct choice(1/0)\n");
		}
	}while(ch!=0);
	return 0;
}
