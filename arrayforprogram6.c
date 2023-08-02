#include<stdio.h>
void main(){
int i,j,temp,age[5];
for(i=0;i<=5;i++){
printf("Enter the value of an age[%d]:",i);
scanf("%d",&age[i]);
	}
	for(i=0;i<=5;i++){
		for(j=1;j<5;i++){
			if(age[i]>age[j]){
				temp=age[i];
				age[i]=age[j];
				age[j]=temp;
			}
		}
	}
	for(i=0;i<=5;i++){
		printf("%4d",age[i]);
	}
}
