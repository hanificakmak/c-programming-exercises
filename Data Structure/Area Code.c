#include<stdio.h>

int main(){
	
	int n;
	
	printf("Enter an area code: ");
	scanf("%d", &n);
	
	switch (n){
		
	case 322:
		printf("Adana");
		break;
		
	case 232:
		printf("Izmir");
		break;
		
	case 216:
		printf("Istanbul (Anatolia)");
		break;
		
	case 212:
		printf("Istanbul (Thrace)");
		break;
		
	default:
		printf("Area code cannot be recognized.");
		break;
		
	}
	
	return 0;
}
