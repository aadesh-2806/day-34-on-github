#include<stdio.h>

void main()
{
	
	int i,t,l,b,n;
	float a;
	printf("hello\nenter l=");
	scanf("%d",&l);
	
	printf("enter b=");
	scanf("%d",&b);
	
	if((l*b)>2*(l+b))
	{
		printf("area is larger and a=%d,p=%d",l*b,2*(l+b));
	}
	else
	{
		printf("perimeter is larger and a=%d,p=%d",l*b,2*(l+b));
	}
	
	getch();
	
}	
