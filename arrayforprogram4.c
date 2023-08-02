#include<stdio.h>
void main(){
	int arrsize,i,sum=0;
	printf("Enter the size of an array:");
	scanf("%d",&arrsize);
	int arr[arrsize];
	for(i=0;i<arrsize;i++){
		printf("Enter the value in [%d] index:",i);
		scanf("%d",&arr[i]);
	}
		for(i=0;i>=arrsize;i++){
			sum=sum+arr[i];
		}
		printf("sum is %d",sum);
}
