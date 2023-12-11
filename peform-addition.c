#include<stdio.h>

main()
{
	int a[100],b[100],c[100];
	int i,n;
	
	printf("Enter size of Array = ");
	scanf("%d",&n);
	
	printf("\nEnter Element A = ");
	
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("\nEnter Element B = ");
	
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&b[i]);
	}
	
	for(i=0 ; i<n ; i++)
	{
		c[i] = a[i] + b[i];
	}
	
	printf("\nSum of Array = ");
	
	for(i=0 ; i<n ; i++)
	{
		printf("%d",c[i]);
	}
}