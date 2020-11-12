#include<stdio.h>

int main(){
	
	int n;
	int j,k;
	
	scanf("%d", &n);
	
	for(j=0; j<=n; j++)
	{	
		for(k=0; k<=j; k++)
			printf("%d",k);
		
		printf("\n");
	}
	
	for(j=n-1; j>=0; j--)
	{
		for(k=0; k<=j; k++)
			printf("%d",k);
		
		printf("\n");	
	}	
	
	
	
	return 0;
}
