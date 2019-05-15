#include<stdio.h>
int main(){
	
	int size1, size2;
	int x;
	int a[size1];
	int b[size2];
	
	printf("Enter array1's size:");
	scanf("%d",&size1);
	
	printf("Enter array2's size:");
	scanf("%d",&size2);
	
	printf("enter array1's elements:");
	
	for(int x=0; x<size1 ;x++)
	{
		scanf("%d",&a[x]);
	}

	printf("enter array2's elements:");

	for(int x=0; x<size2;x++)
	{
		scanf("%d",&b[x]);
	}
	
	for(x=0;x<size1;x++)
	{
		a[x]=0;
	}	
	
	for(x=0;x<size2;x++)
	{
		a[x]=b[x];
	}
	
	for(x=0;x<size1;x++)
	{
		printf("%d ",a[x]);
	}	
		return 0;
}
