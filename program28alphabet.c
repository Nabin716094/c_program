#include<stdio.h>
void main(){
	char luc;
	printf("Enter the character:");
	scanf("%c",&luc);
	switch(luc){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':	
			printf("Alphabet is vowel\n");
			break;
			default:
				printf("Alphabet is consonant\n");
	}
}
