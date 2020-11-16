#include<stdio.h>

long main()
{
	int x,i,j;
	scanf("%d",&x);
	long long w[x],result=0;
	for(i=0;i<x;i++)
	{
		scanf("%ld",&w[i]);
	}
	for(i=0;i<x;i++)
	{
		for(j=i+1;j<x;j++)
		{
			if((w[i] * w[j])>result)
			{
				result=w[i] * w[j];
			}
			
		}
	}

	printf("%lld",result);	
	return 0;
}

