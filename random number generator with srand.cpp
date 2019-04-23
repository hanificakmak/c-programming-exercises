#include<stdio.h>
#include<stdlib.h>

int main(){

	int seed;

	scanf("%d",&seed);

	srand(seed);
	
	for(int i=1;i<=100; i++)
	{
		printf("%10d",rand());
		
		if(i%5==0)
		{
			printf("\n");
		}
	}
	
	
	return 0;
}
