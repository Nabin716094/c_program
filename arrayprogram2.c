#include<stdio.h>
void main(){
	int age[5];
	int i;
	for(i=0;i<=4;i++){
		printf("Enter the value for index[%d]:",i);
		scanf("%d",&age[i]);
	}
	for(i=0;i<=4;i++){
		printf("value is index[%d] is %d\n",i,age[i]);
	}
}
