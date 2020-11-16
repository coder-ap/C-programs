#include<stdio.h>
#include<conio.h>

void main()
{
	int a[50],i,j,c=0,x,b[50],q[50];
	printf("Enter the number of coins:\n");
	scanf("%d",&x);
	printf("Coins: \n");
	for(i=0;i<x;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<x;i++)
	{
		b[i]=0;
		c=0;
		for(j=0;j<x;j++)
		{
			if(a[i]==a[j])
			{
				c++;
			}
		}
		b[i]=c;
		q[i]=a[i];
	}
	
	for(i=0;i<x;i++)
	{
		if(b[i]%2!=0)
		{
		printf("\nMissing coins %d\n",q[i]);
	}
}
}

