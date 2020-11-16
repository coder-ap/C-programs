#include<stdio.h>
#include<conio.h>

void main()
{
	long int A=1,B=7,x,i,q,v;
	scanf("%d",&x);
	
	int a[x];
	
	for(i=1;i<=x;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=1;i<=x;i++)
	{
		q=a[i]-A;
		v=B-a[i];
		
		if(q < v)
		{
			printf("A\n");
			A=a[i];
		}
		else if(q > v)
		{
			printf("B\n");
			B=a[i];
		}
		else
		{
			printf("A\n");
		}
		}
		}
		
