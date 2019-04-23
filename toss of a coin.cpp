#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
int tail=0;
int head=0;
	
	srand(time(NULL));
	
	for(int i=1;i<=1000; i++)
	{
		printf("%10d",(rand()%2));
		
		if(i%10==0)
		{
			printf("\n");
		}
		
		if(rand()%2==0)
		{
			tail++;
		}
		
		else 
			head++;
	}
	
	printf("\ntail is %d, head is %d ",tail, head);
	
	return 0;
}
