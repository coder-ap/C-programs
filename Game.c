#include<stdio.h>
#include<conio.h>

void main()
{
	int m,i,z=1,f,s=0,v,u;
	scanf("%d",&m);
	for(i=1;i<=m;i++)
	{
		u=z;
		f=2*u;
		s=s+(u+f);
		z++;
		
		if(s==m)
		{
			printf("Motu\n");
			break;
		}
		else if(s>m)
		{
			v=s-m;
			if(v>u && v<=f)
			{
				printf("Motu");
				break;
			}
			else
			{
				printf("Patlu");
				break;
				
			}
			if(((s-m)-f)<u)
			{
				printf("Patlu");
				break;
			}
			else
			{
				printf("Motu");
				break;
			}
					
		}
	}
}
