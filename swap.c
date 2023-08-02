#include<stdio.h>
void main(){
	int m=10 , n=20, o;
	o=m;
	m=n;
	n=o;
	printf("The swap value of m and n is %d and %d",m,n);
}
