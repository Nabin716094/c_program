#include<stdio.h>
void main(){
	int a,b,c,d,e,g=0;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	g = a>b&&a>c&&a>d&&a>e?a:
		b>c&&b>d&&b>e?b:
			c>d&&c>e?c:
				d>e?d:e;
				printf("Greater among five is %d",g);
}
