#include<stdio.h>
main()
{
	int c=1,n;
	printf("Enter number:-");
	scanf("%d",&c);
	while(c>=1)
	{
		if(c%2==0)
		{
			printf("%d\n",c);
		}
		c--;
	}
}
