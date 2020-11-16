#include<stdio.h>
#include<conio.h>

void main()
{
	int x,i,j,a[5][5],v,q,e;
	scanf("%d",&x);
	
	for(i=0;i<x;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
		for(i=0;i<x;i++)
	{
		
	
		v=a[i][2]+a[i][1];
		q=v%a[i][0];
		e=q+a[i][1];
	
		if(e==a[i][3])
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}

