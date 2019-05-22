#include<stdio.h>
#include<string.h>
int main(){
int result;

char message1[10];
char message2[10];

scanf("%s",message1);
scanf("%s",message2);


printf("%s\n%d",strncat(message1,message2,3),strcmp(message1, message2));


return 0;
}

