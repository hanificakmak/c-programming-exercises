#include<stdio.h>

void celcius(float);
void fahrenheit(float); //prototype

int main(){

int num,n;
float celc,fahren;

printf("Enter 1 to convert from Fahrenheit to Celsius\n");
printf("Enter 2 to convert from Celsius to Fahrenheit\n");
printf("\n**********************************************\n");

while(n!=2 || n!=1)

        {
         
		printf("\nEnter a number:");
		scanf("%d",&n);

if (n==1)

        {
        	celcius(celc);
        }

else if (n==2)

        {
			fahrenheit(fahren);
        }

else

        break;

        }
                return 0;
}

void celcius(float result_c)
{
        float f;

        printf("\nEnter temperature in Fahrenheit:");
        scanf("%f",&f);

        result_c = (5.0/9.0)*(f-32);

        printf("Celsius %.2f\n",result_c);

        }


void fahrenheit(float result_f)
        {
        float c;

        printf("\nEnter temperature in Celsius:");
        scanf("%f",&c);

        result_f = (9.0/5.0)*c + 32;

        printf("Fahrenheit %.2f\n",result_f);

        }
