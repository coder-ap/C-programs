#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,x=1;
	
	while(i < 8)
	{
		i++;
		x=x*i;
		printf("%d %d\n",i,x);
	}
	
	printf("\n\n%d",x);
}
