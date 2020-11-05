//This code calculates the Fibonacci Series (0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...) until the nth term by using recursive function. 
//You can print as many terms of the series as required.

#include<stdio.h>

int fibonacci(int);                                   //Function declaration

int main(){
	
	int n, c;                                           //Variable defining
	int a=0;                                            //To calculate the first terms of Fibonacci, we need to start from 0, as Fibonacci Series is starting from 0. 
	
	printf("Enter the number of terms: ");              //Asking number from using
	scanf("%d", &n);
	
	for (c=1; c<=n; c++)                                //Until the nth term we are calculating one by one
	{
		printf("%d\n", fibonacci(a));
		a++;
	}

	return 0;

}


int fibonacci(int n){                                 //Writing function recursively
	
	if(n == 0)
		return 0;
		
	else if(n == 1)
		return 1;
	
	else
		return (fibonacci(n-1) + fibonacci(n-2));
	
}
