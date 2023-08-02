#include<stdio.h>
void main(){
	int i;
	float m1,m2,m3,m4,m5,m6,m7,m8,per,total,g=0;
	for(i=1;i<=10;i++){
	printf("Enter the marks of %d student:",i);
	scanf("%f %f %f %f %f %f %f %f",&m1,&m2,&m3,&m4,&m5,&m6,&m7,&m8);
	total = m1+m2+m3+m4+m5+m6+m7+m8;
	per = total/8;
	g = per>g?per:g;
}
printf("The greatest is %f",g);
}

