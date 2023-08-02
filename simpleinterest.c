#include<stdio.h>
void main(){
	float P,T,R,SI;
	printf("Enter the principle:",P);
	scanf("%f",&P);
	printf("Enter the time:",T);
	scanf("%f",&T);
	printf("Enter the Rate:",R);
	scanf("%f",&R);
	SI = P*T*R/100;
	printf("The simple interest is %f",SI);
}
