#include <stdio.h>

void main() {
    int i,n,digit,rem,c=0;
    printf("Enter the digits: ");
    scanf("%d", &digit);
    printf("Enter the number to find and count in digit: ");
    scanf("%d", &n);
    for (i=digit;i>0;i=i/10) {
        rem = digit%10; 
        digit = digit/10;
        if(rem==n){
        	c++;
		}
    }
    printf("The number is %d and count is %d",n,c);
    }

