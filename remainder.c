#include<stdio.h>
void main(){
	int pach;
	float baki;
	printf("Enter the five digit number:",pach);
	scanf("%d",&pach);
	if (pach>=10000&&pach<=99999){
		baki = pach%3;
		printf("The remainder is %f",baki);
	}
	else{
		printf("Please enter the valid number");
	}
}
