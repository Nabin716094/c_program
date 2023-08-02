#include<stdio.h>
void main(){
	int i,num,sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=num;i>=1;i--){
		sum = sum + (i*i);
	}
	printf("Sum is %d",sum);
}
