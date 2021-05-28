#include<stdio.h>
#include<math.h>
void main()
{
	
	int n,i,t;
	float a[10],s;
	printf("hello\nenter no of subjects=");
	scanf("%d",&n);
	
	i=0;
	s=0;
	while(i<n) 
	{
		printf("enter percentage of subject %d",i+1);
		scanf("%f",a[i]);
		s=s+a[i];
		i++;
	}
	s=s/n;
	i=0;
	while(i<n)
	{
		if(a[i]<40)
		{
			t=i;
			while(i<n-1)
			{
				i++;
				if(a[i]<40)
				{
					printf("fail");
					i++;
					break;
				}
			}
			if(i==n)
			{
				printf("paper %d due",t);
				goto a;
			}
			i=t;
		}
		i++;
	}
	a:
	if(s<33)
	{
		printf("fail");
	}
	else
	{
		if(s<45)
		{
			printf("3rd division pass");
		}
		else
		{
			if(s<60)
			{
				printf("2nd division pass");
			}
			else
			{
				if(s<70)
				{
					printf("1st division pass");
				}
				else
				{
					printf("pass with hons");
				}
			}
		}
	}
	getch();
	
}
