#include<stdio.h>

void main()
{
	int a[2][3]={1,2,3,4,5,6};
	printf("%d",*(&a+1));
}
