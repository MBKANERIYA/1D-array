#include<stdio.h>

main()
{
	int n;
	
	printf("Enter size of Array = ");
	scanf("%d",&n);
	
	int a[n],i;
	
	printf("Enter Element = \n");
	
	for(i=0 ; i<n ; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	
	printf("\nElements in array = \n");
	
	for(i=0 ; i<n ; i++)
	{
		printf("A = %d\n",a[i]);
	}
	
	
}