#include<stdio.h>

main()
{
	int n;
	
	printf("Enter size of Array = ");
	scanf("%d",&n);
	
	int a[n];
	printf("\nEnter Element = \n");
	
	int i,sum=0,ave;
	
	for(i=0 ; i<n ; i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
		
	}
	
	for(i=0 ; i<n ; i++)
	{
		sum = sum + a[i];
	}
	
	printf("\nSum of all Array elements = %d\n",sum);
	
	ave = sum / n;
	
	printf("\nAverage of Array = %d\n",ave);
}