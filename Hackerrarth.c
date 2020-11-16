#include<stdio.h>
#include<conio.h>

void main()
{
	int j,l,a[10],q,x,i,p;
	scanf("%d",&x);
	for(i=0;i<x;i++)
	{
		scanf("%d",&p);
		for(j=0;j<7;j++)
		{
			
			scanf("%d",&a[j]);
		}
		for(l=0;l<7;l++)
		{
			if(a[l]==1)
			{
				q=l;
			}
		}
		if(q==0)
		{
			printf("MONDAY");
			
		}
		else if(q==1)
		{
			printf("TUESDAY");
		}
		else if(q==2)
		{
			printf("WEDNESDAY");
		}
		else if(q==3)
		{
			printf("THURSDAY");
		}
		else if(q==4)
		{
			printf("FRIDAY");
		}
		else if(q==5)
		{
			printf("SATURDAY");
		}
		else
		{
			printf("SUNDAY");
		}
	}
}
