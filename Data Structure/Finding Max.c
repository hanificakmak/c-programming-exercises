#include<stdio.h>

int main(){
	
	int baris[5];
	int max;
	
	scanf("%d",&baris[0]);
	max=baris[0];
	
	for(int i=1; i<=4; i++)
	{
		scanf("%d",&baris[i]);
		
		if(baris[i]>max)
			max = baris[i];
			
	}
	
	printf("Max %d", max);
	
	
	
	return 0;
}
