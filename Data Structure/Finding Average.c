#include<stdio.h>

int main(){
	
	int n;
	int counter=0;
	int sum=0;
	int average;
	
	printf("Enter the values: ");
	scanf("%d", &n);
	
	while(n != 9999)
	{	
		counter++;
		sum+=n;
		scanf("%d", &n);	
		
	}
	
	average= sum/counter;
	
	printf("Average is %d", average);
	
	
	return 0;
}
