#include<stdio.h>
main()
{
	int i=1,fact=1,n;
	
	printf("Enter the value of N =");
	scanf("%d",&n);
	
	while(n>=i)
	{
		fact=fact*n;
		n--;
	}
	printf("fact vlue = %d",fact);
}