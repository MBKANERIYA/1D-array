#include<stdio.h>

main()
{
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	int i,len;
	
	len = sizeof(a) / sizeof(0);
	printf("Length of Array = %d\n",len);
	
	for(i=0 ; i<len ; i++)
	{
		printf("%d\n",a[i]);
	}
	
	
}