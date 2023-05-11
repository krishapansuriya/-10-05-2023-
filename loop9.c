#include<stdio.h>
main()
{
	int i=1,fac,n;
	printf("Enter number:-");
	scanf("%d",&n);
	while(i<=n)
	{
		fac=fac*i;
		i++;
	}
	printf("%d",fac);
}
