#include<stdio.h>
main()
{
	int i=1,sum=0,n;
	printf("Enter number:-");
	scanf("%d",&n);
	while(i<=n)
	{
		sum=sum+i;
		i++;
	}
	printf("%d",sum);
}
