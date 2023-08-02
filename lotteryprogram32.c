#include<stdio.h>
void main(){
	  int num;
	  int luckynum = 9999;
	  int chances = 3;
	  while (chances>0){
	  	printf("Enter your choice number:");
	  	scanf("%d",&num);
	  	if(num==luckynum){
	  		printf("Congratulations! you have won the lottery.\n");
	  		break;
		  }
		  else{
		  	chances--;
		  	if(chances>0){
		  		printf("Sorry, you have %d chances left.\n",chances,chances==1?"chances":"chances");
			  }
			  else{
			  	printf("Sorry you didn't find the correct number");
			  }
		  }
	  }
}
