#include<stdio.h>
#include<conio.h>

void main()
{
	int a[50],i;
	for(i=0;i<5;i++)
	{
		scanf("%d",a+i);
	}
	for(i=0;i<5;i++)
	{
		printf("%d",*(a+i));
	}
}
