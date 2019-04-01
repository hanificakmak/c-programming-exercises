//It finds sum of the digits of entered number

#include <stdio.h>

int main()
{
    int num, sum=0;
    
    printf("Enter any number:");
    
	scanf("%d", &num);

    // Repeat till num becomes 0
     while(num!=0)
    {
        // Find last digit of num and add to sum 
        sum += num % 10;

        //Remove last digit from num
        num = num / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
