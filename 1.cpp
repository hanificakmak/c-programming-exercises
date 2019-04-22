#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){

int i;
int seed;

	srand(time(NULL));

do {
	printf("enter your seed:");
	scanf("%d",&seed);
	
	for(i=1;i<=10;i++)
{
	printf("%6d",1+(rand()%6));
	
	if(i%5==0)
	{	
		printf("\n");
	}

}
}

while(seed!=-1);

return 0;
}
