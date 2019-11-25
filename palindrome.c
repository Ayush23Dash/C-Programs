#include<stdio.h>
#include<conio.h>
void pallindrome(int n)
{
	int arr[20],ar1[20],ar2[20],i,j,q,r,index=0,p=0;
	while(n!=0)
	{
		q=n/10;
		r=n%10;
		n=q;
		arr[index]=r;
		index++;
	};
//	To display the digits of the given number in an array
	for(i=(index-1);i>=0;i--)
	{
		printf("%d ",arr[i]);
	}
	
//	To put the number and the reversed number in two different arrays
	for(i=0,j=(index-1);i<index,j>=0;i++,j--)
	{
		ar1[i]=arr[i];
		ar2[i]=arr[j];
	}
	
//	To check for pallindrome
	for(i=0;i<index;i++)
	{
			if(ar1[i]==ar2[i])
			p++;
		else
		p=0;
}

//To display pallindrome or not
	if(p==index)
		printf("\nPallindrome\n");
		else
		printf("\nNot a pallindrome\n");
}

//Main Function
int main()
{
	int n,ch;
	printf("Enter number\n");
	scanf("%d",&n);
	pallindrome(n);
	do{
		printf("Do you want to check for more pallindromes?(1/0)");
		scanf("%d",&ch);
	label:	if(ch==1)
		{
			printf("Enter number\n");
			scanf("%d",&n);
			pallindrome(n);
		}
		else if(ch==0)
		printf("Bye...");
		else
		{
			printf("Enter correct option(1/0)\n");
			scanf("%d",&ch);
			goto label;
		}
	}while(ch!=0);
	return 0;
}
