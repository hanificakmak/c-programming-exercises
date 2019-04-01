#include<stdio.h>

int main(){
	
	int x,y,total=1;
	
	printf("enter two integers:");
	
	scanf("%d %d",&x,&y);
	
	while(y>=1)
	{
		total=total*x;
		y--;
	printf("total is %d",total);
	}
	
	printf("total is %d",total);
	

	return 0;
}
