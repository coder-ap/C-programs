#include<stdio.h>
#include<conio.h>
#include<string.h>

main()
{
	char x[50];
	int i,c=0,s,j;
	printf("Enter the sentence:\n");
	gets(x);
	s=strlen(x);
	
	for(i=0;i<s;i++)
	{
		c=0;
		for(j=0;j<s;j++)
		{		
			if(x[j]==x[i])
			{	
				c++;
			}
		}
		printf("%c = %d\n",x[i],c);
	}

}
