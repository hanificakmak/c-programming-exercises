#include<stdio.h>

float PositiveAverage(int);

int main(){
	
	int x;
	
	printf("%.2f",PositiveAverage(x));
	
	return 0;
}

float PositiveAverage(int x){
	
	int counter=0;
	float average;
	int sum=0;
	do 
	{
		scanf("%d",&x);
		
		if(x>0) 
		
		{
	     counter++;
		 sum=sum+x;
		}
	
		average=(float)sum/counter;
			 
	}
	
	while(x!=0);
	
	return average;
}
