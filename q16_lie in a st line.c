#include<stdio.h>

void main()
{
	
	int t1,t2,t3,x1,x2,x3,y1,y2,y3;
	float a;
	printf("hello\nenter x1 =");
	scanf("%d",&x1);
	printf("enter y1 =");
	scanf("%d",&y1);
	printf("enter x2 =");
	scanf("%d",&x2);
	printf("enter y2 =");
	scanf("%d",&y2);
	printf("enter x3 =");
	scanf("%d",&x3);
	printf("enter y3 =");
	scanf("%d",&y3);
	
	t1=(y2-y1)/(x2-x1);
	t2=(y2-y3)/(x2-x3);
	t3=(y3-y1)/(x3-x1);
	if(t1==t3 && t2==t3 &&t1==t3)
	{
		printf("yes they lie in a st line");
	}
	else
	{
		printf("they do not lie in a st line");
	}
	getch();
	
}	
