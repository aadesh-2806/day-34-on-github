#include<stdio.h>
#include<conio.h>
int main()
{
	int t,a,s,b;
	float c;
	//clrscr();
	printf("welcome\n");
	printf("enter value1");
	scanf("%d",&a);

	printf("enter value2");
	scanf("%d",&b);

	printf("enter value\n1 for add\n2 for sub\n3 for mult\n4 for div\n");
	scanf("%d",&t);
	switch(t)
	{
		case 1:
			c=a+b;
			printf("%f",c);
			break;

		case 2:
			c=a-b;
			printf("%f",c);
			break;

		case 3:
			c=a*b;
			printf("%f",c);
			break;

		case 4:

			c=a/b;
			printf("%f",c);
			break;

		default:
			printf("Invalid");

	}
	getch();
}
