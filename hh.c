#include<stdio.h>
void main(){
float a,b,c,d;
printf("Enter the first person height :");
scanf("%f",&a);
printf("Enter the second person height:");
scanf("%f",&b);
printf("Enter the third person height:");
scanf("%f",&c);
d = a<b&&a<c?a:
	b<c?b:c;
	printf("The samllest one is %f",d);
}
