#include<stdio.h>
void main(){
	int Math,Science,English,Nepali,Social,Avg;
	printf("Enter the marks of Math:");
	scanf("%d",&Math);
	printf("Enter the marks of Science:");
	scanf("%d",&Science);
	printf("Enter the marks of English:");
	scanf("%d",&English);
	printf("Enter the marks of Nepali:");
	scanf("%d",&Nepali);
	printf("Enter the marks of Social:");
	scanf("%d",&Social);
	Avg = (Math+Science+English+Nepali+Social)/5;
	printf("Average is %d",Avg);
}
