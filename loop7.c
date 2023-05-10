#include<stdio.h>
main()
{
	int a=2000,b=3000;
	while(a<=b)
	{
		if(a%4==0)
		{
			printf("%d\n",a,b);
		}
		a++;
	}
}
