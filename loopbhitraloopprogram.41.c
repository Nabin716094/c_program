#include<stdio.h>
void main(){
	int i,j;
	for (i=1;i<=5;i++){
		 for (int space = 1; space <= 5 - i; space++) {
            printf(" ");
        }

		for (j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
}
