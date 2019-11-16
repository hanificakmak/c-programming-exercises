//This program makes a linear search in randomly sized array
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int linearSearch(const int array[], int key, int SIZE); 

int main()
{
	srand(time(NULL));
	int SIZE;
	SIZE=rand(); //This function assign a value to the size of array
	printf("your size %d\n",SIZE); //Prints our array size. In every compiling value will change.
	
	int a[SIZE];
	int x;
	int searchKey;
	int element;
	
	//creating data
	for(x=0 ; x<SIZE; x++)
	{
		a[x]=2*x;
	}
	
	printf("Search your key:\n");
	scanf("%d",&searchKey);
	
	element = linearSearch(a, searchKey, SIZE); //calling function
	
	if(element!=-1)
		printf("Found value in element %d", element);
		
	else 	
		printf("Value not found!");
	 
  return 0;
}

int linearSearch(const int array[], int key, int SIZE){
	
	int n;
	
	for(n=0; n<SIZE; n++)
	{
		if(array[n]==key)
		{
			return n;
		}
		
	}

	return -1;
	
}
