#include<stdio.h>
#include<conio.h>

void main()
{
	int a[100],i,x,n,x1,j;
	printf("Enter the number of terms:\n");
	scanf("%d",&x1);
	printf("Enter numbers:\n");
	for(i=0;i<x1;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The numbers are:\n");
	for(i=0;i<x1;i++)
	{
		printf("%d ",a[i]);
	}
	printf("Enter the number to be deleted: \n");
	scanf("%d",&x);
	

	
	for(i=x+1;i<x1;i++)
	{
		a[i-1]=a[i];
		
	}
	
	printf("\n New list:\n");
	for(i=0;i<(x1-1);i++)
	{
		printf("%d ",a[i]);
	}
}
