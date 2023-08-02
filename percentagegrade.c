#include<stdio.h>
void main(){
	float math,science,english,nepali,total,percentage;
	char grade;
	printf("Enter the marks of 4 subjects:");
	scanf("%f %f %f %f",&math,&science,&english,&nepali);
	total = math+science+english+nepali;
	percentage = total/4;
	if (percentage>=85)
		grade='A';
	else if(percentage>=70)	
        grade='B';
	else if(percentage>=55)
	    grade='C';
	else if(percentage>=40)
	    grade='D';
	else
	    grade='E';			
	printf("Percentage is %f\n Grade is %c\n",percentage,grade);
}
