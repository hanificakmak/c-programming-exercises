//This program shows how many numbers in first array are greater than in the second array

#include<stdio.h>
int main(){
int i;
int a[5];
int b[5];
int element=0;


	printf("Enter first array's element:");
	scanf("%d %d %d %d %d",&a[0],&a[1],&a[2],&a[3],&a[4]);
	
	printf("Enter second array's element:");
	scanf("%d %d %d %d %d",&b[0],&b[1],&b[2],&b[3],&b[4]);
	
for(i=0; i<=4; i++)
{
	if(a[i]>b[i])
	{
		element++;
	}
	
}

printf("%d elements in Array1 are greater than elements in Array2",element);

return 0;
}

