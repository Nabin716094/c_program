#include<stdio.h>
void main(){
	int i,number,rem;
	printf("Enter the number:");
	scanf("%d",&number);
	for(i=number;i>0;i=i/10){
	rem = number%10;
	number = number/10;
	printf("%d",rem);
	}
}
