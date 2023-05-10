#include<stdio.h>
main()
{
	int c=1,n;
	printf("Enter number:-");
	scanf("%d",&n);
	while(c<=n)
	{
		if(c%2==1)
		{
			printf("%d\n",c);
		}
		c++;
	}
}
