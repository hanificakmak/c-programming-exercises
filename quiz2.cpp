#include<stdio.h>

int main() 
{

int salary(int);

int a; 
int sum;
int i;

for(;i!=-1 ; i++)
{	

printf("enter sale:");
scanf("%d",&a);

if(a<0)
	break;

sum=salary(a);

printf("salary is %d $ \n",sum);
}


return 0;
}

int salary(int c) 
{
int sum;


	sum = 200 + (c*9/100);

	return sum;
	
}
