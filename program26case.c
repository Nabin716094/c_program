#include<stdio.h>
void main(){
	int choice;
	printf("Enter the choice:");
	scanf("%d",&choice);
	switch(choice){
		case 1:
			printf("One");
			break;
			case 2:
				printf("Two");
				break;
				default:
					printf("Wrong");
	}
}
