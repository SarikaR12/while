#include<stdio.h>
main()
{
	int i=1,n;
	
	printf("Enter value of =");
	scanf("%d",&n);
	
	while(n>=i)
	{
		printf("%d\n",n);
		
		n--;
	}
}