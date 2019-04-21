#include<stdio.h>

int main(){
	
int factorial(int);
float compute_c(int,int);
	
int x,y;
float c;

	printf("For C(n,r)\n");
	printf("enter n integer:");
	scanf("%d",&x);
	printf("enter r value:");
	scanf("%d",&y);
	
	c=compute_c(x,y);
	
	printf("C is %.0f",c);
	
	return 0;
}


int factorial(int x){
	
	int result=1;
	
	while(x>=1)
	{
		result*=x;
		x--;	
	}
	
	return result;
	
	}
	

float compute_c(int n, int r){
	
	float c;
	
	c=factorial(n)/factorial(n-r);
	
	return c;	

}
