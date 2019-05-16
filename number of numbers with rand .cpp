#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
	
int i;
int arr[5];
int counter[5]={0,0,0,0,0};

	srand(time(NULL));

printf("Array elements:");

for(i=0;i<5;i++)
{
	arr[i]= 1+rand()%5; 
	 
	printf("%d ",arr[i]);
	
	if(arr[i]==1)
		counter[0]++;
	
	else if(arr[i]==2)
		counter[1]++;
	
	else if(arr[i]==3)
		counter[2]++;
		
	else if (arr[i]==4)
		counter[3]++;
	
	else 
		counter[4]++;
}

for(i=0;i<5;i++)
{
	printf("\nNumber of %ds = %d\n",i+1,counter[i]);
	
}

return 0;
}

