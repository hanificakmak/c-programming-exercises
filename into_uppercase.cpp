//This program converts any string you enter into uppercase.

#include<stdio.h>
#include<ctype.h>
int main(){

#define MAXCHARS 100

char message[MAXCHARS];

void convertToUpper(char []);

printf("Type in any sequence of characters:\n");
gets(message);

//scanf("%s",message);

convertToUpper(message);

printf("The characters just entered, in uppercase are:\n%s\n",message);


return 0;
}

void convertToUpper(char message[]){

	int i;
	
	for(i=0 ; message[i]!='\0' ; i++)

		message[i]=toupper(message[i]);

}
