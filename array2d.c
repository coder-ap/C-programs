#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,x,k,t,u,s;
	scanf("%d",&x);
	for(k=0;k<x;k++)
	{
		scanf("%d %d",&t,&u);
		int a[t][u],b[t][u],q[t][u];
	for(i=0;i<t;i++)
	{
		for(j=0;j<u;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<t;i++)
	{
		for(j=0;j<u;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
		
	for(i=0;i<t;i++)
	{
		for(j=0;j<u;j++)
		{
			q[i][j]=a[i][j]+b[i][j];
		
		}
		
	}
	
	for(i=0;i<t;i++)
	{
		for(j=0;j<u;j++)
		{
			if(i==j)
			{
				s=s+q[i][j];
			}
		}
	}
	printf("\n%d",s);
}
}

