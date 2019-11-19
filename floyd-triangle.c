#include<stdio.h>
#include<conio.h>
void floyd(int n)
{
	int i,j,num=1,arr[10][10];
	for(i=0;i<=(n-1);i++)
	{
		for(j=0;j<=i;j++)
		{
			arr[i][j] = num;
			num++;
		}
	}
	printf("The floyd triangle is:\n");
	for(i=0;i<=(n-1);i++)
	{
		for(j=0;j<=i;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int n,ch;
	printf("Enter the number of rows upto which you want the floyd triangle\n");
	scanf("%d",&n);
	floyd(n);
	do{
		printf("Do you want to print more floyd triangles(1/0)\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			printf("Enter the number of rows upto which you want the floyd triangle\n");
			scanf("%d",&n);
			floyd(n);
		}
		else if(ch==0)
		{
			printf("Bye...");
		}
		else
		printf("Enter correct choice(1/0)\n");
	}while(ch!=0);
	return 0;
}
