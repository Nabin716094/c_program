#include<stdio.h>
void main(){
	float paisa, rupees;
	printf("Enter the paisa:");
	scanf("%f",&paisa);
	rupees = paisa/100;
	printf ("%f paisa is equal to %f rupees",paisa,rupees);
}
