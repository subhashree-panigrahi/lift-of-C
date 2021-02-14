#include<stdio.h>
int main()
{
	int i,arr[10],large,small,n;
	printf("enter the number of elements in array:");
	scanf("%d",&n);
	printf(" \n enter the  of elements in array:");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	large=arr[0];
	for(i=0;i<n;i++)
	if(large<arr[i])
	{
		large=arr[i];
	}
	printf("\n largest element is %d",large);
	small=arr[0];
	for(i=0;i<n;i++)
	if(small>arr[i])
	{
		small=arr[i];
	}
	printf(" \n smallest element is %d",small);
	return 0;
}

	
	

