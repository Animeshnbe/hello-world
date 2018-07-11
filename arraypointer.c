#include<stdio.h>
void  main()
{
	int i ,n;
	int b[n];
	int *a[n];
	printf("enter the number of elements of array\n ");
	scanf("%d",&n);
	//a[n]=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
	{
		scanf("%d",b[i]);
		a[i]=&b[i];
	}
	printf("the elements of array are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",*a[i],"\t");
	}
}
