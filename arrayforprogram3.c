#include<stdio.h>
void main(){
	int age[5];
	int i,count=0;
	for(i=0;i<=4;i++){
		printf("Enter the number for index[%d]:",i);
		scanf("%d",&age[i]);
	}
	for(i=0;i<=4;i++){
		if(age[i]%2==0){
			count++;
			printf("%d",age[i]);
		}
		printf("%d",count);
	}
}
