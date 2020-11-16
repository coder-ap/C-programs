#include<stdio.h>
#include<conio.h>

void main()
{
	int i,j,q[10],x,a,w,a1,v,c,r,t;
	
	scanf("%d",&x);
	
	for(i=0;i<x;i++)
	{
		for(j=1;j<=4;j++)
		{
			scanf("%d",&q[j]);
			
		}
	}
	
	for(i=0;i<x;i++)
	{
		for(j=1;j<=4;j++)
		{
		
	
			a=q[1]*60;
	w=a+q[2];
	a1=q[3]*60;
	v=a1+q[4];
	
	if(w > v)
	{
		c=w-v;
		r=c%60;
		t=c/60;
		printf("%d ",t);
		printf("%d\n",r);
	}
	else
	{
			c=v-w;
		r=c%60;
		t=c/60;
		printf("%d ",t);
		printf("%d\n",r);
	}
}
	}
}



