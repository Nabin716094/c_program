  #include<stdio.h>
void main(){
	int i,digit,product;
	printf("Enter the five digit number:");
	scanf("%d",&i);
	while(i<=99999&&i>9999){
		digit = i%10;
		product *=digit;
		i /= 10;
	}
	printf("The product of individual five digit is %d\n",product); 
}
