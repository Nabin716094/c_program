#include<stdio.h>
void main(){
	int i,n,c=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=2;i<=n;i++){
		if (n%i==0){
		c++;
	}
}
	if(c==1){
	printf("The given number is a prime number");
	}
	 else{
		printf("The given number is not a prime number");
	}
}
