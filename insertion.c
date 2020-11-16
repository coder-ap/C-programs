#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,x,n,x1;
	printf("Enter numbers:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("The numbers are:\n");
	for(i=0;i<5;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\nEnter the index:\n");
	scanf("%d",&x);
	printf("Enter the number to be inserted: \n");
	scanf("%d",&n);
	
	for(i=4;i>=x;i--)
	{
		a[i+1]=a[i];		
	}
	
	a[x]=n;
	
	for(i=0;i<6;i++)
	{
		printf("%d ",a[i]);
	}
	
}
