#include<stdio.h>
#include<math.h>
void main()
{
	
	int a;
	
	printf("hello\nenter calls=");
	scanf("%d",&a);
	
	if(a<=150)
	{
		printf("%d",0);
	}
	else
	{
		if(a<=250)
		{
			printf("%d",((a-150)*0.9+0));
		}
		else
		{
			if(a<=400)				//phone bills
			{
				printf("%d",(a-250)*1.2+90);
			}
			else
			{
				printf("%d",(a-400)*1.5+270);
			}
			
		}
	}
	getch();
	
}	
