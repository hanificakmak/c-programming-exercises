//This program compares two strings with strcmp function and add them with strcat function.

#include<stdio.h>
#include<string.h>
#define SIZE 5

int main(){


char s1[SIZE];
char s2[SIZE];

printf("Enter string1:");
gets(s1);
printf("Enter string2:");
gets(s2);


if(strcmp(s1,s2)>0)
	printf("String1 > String2\n");
	
else if(strcmp(s1,s2)<0)
	printf("String1 < String2\n");	

else 
	printf("String1 = String2\n");


printf("%s",strcat(s1,s2));



return 0;
}
