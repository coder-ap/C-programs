#include<stdio.h>
#include<conio.h>

void main()
{
	int x,r=0,s,i,d,f;
	scanf("%d",&x);
	
	int q[x];
	
	for(i=1;i<=x;i++)
	{
		scanf("%d",&q[i]);
	}
	printf("Numbers:\n");
	for(i=1;i<=x/2;i++)
	{
		printf("%d\n",q[i]);
	}
	printf("Numbers 2:\n");
	for(i=(x/2)+1;i<=x;i++)
	{
		printf("%d\n",q[i]);
	}
}

