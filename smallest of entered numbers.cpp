// It finds smallest of entered numbers.

#include<stdio.h>
int main()
{
    int  number,smallest,counter=1;
    
    printf("enter an integer:");
    scanf("%d",&number);
    
    smallest=number;
    
    while(counter<=9)
    {
    
    printf("enter an integer:");
    scanf("%d",&number);
    
    if (number<smallest)
    	
    smallest=number;
    
    counter++;
    	
    	
	}
    
    printf("smallest %d",smallest);
    
    return 0;
}
