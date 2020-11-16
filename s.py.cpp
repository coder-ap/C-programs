#include<stdio.h>
#include<conio.h>

int Fibo(int n)
{
	if(n<=1)
	{
		return n;
	}
	else
	{
		return (Fibo(n-1)+Fibo(n-2));	
	}	
}

int main()
{
	int x,i;
	printf("Enter the last term:\n");
	scanf("%d",&x);
	for(i=x;i>=0;i--)
	{
		printf("%d ",Fibo(i));
	}
	return 0;
}
