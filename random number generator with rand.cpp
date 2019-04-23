//This program generates number by using rand function.
#include<stdio.h>
#include<stdlib.h>


int main(){

int i;

for(i=1;i<=100;i++)
{
	printf("%10d",rand());
	
	if(i%5==0)
	{
		printf("\n");
	}
}

return 0;
}
