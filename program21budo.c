#include<stdio.h>
void main(){
	int umer,i,bachhacount=0,thithocount=0,budhocount=0,g=0,s=150;
	for(i=1;i<=10;i++){
		printf("Enter the age of %d person:",i);
		scanf("%d",&umer);
		if(umer<=15){
			bachhacount++;
		}
		if(umer>15&&umer<=40){
			thithocount++;
		}
		if(umer>40&&umer<100){
			budhocount++;
		}
		g = umer>g?umer:g;
		s = umer<s?umer:s;
	}
	printf("Number of bachha:%d\n",bachhacount);
	printf("Number of thitho:%d\n",thithocount);
	printf("Number of budho:%d\n",budhocount);
	printf("Thulo umer:%d\n",g);
	printf("Sano umer:%d\n",s);
}
