#include <stdio.h> 
int main(){
	int a,b,c,d,e,f,g;
	scanf("%d %d",&a,&b);
	d=b%10;
	e=b/10;	
	printf("%4d\n",a);
	printf("* %2d\n",b);
	printf("------\n");
	c=d*a;
	f=e*a;
	printf("%4d\n",c);
	printf("%3d\n",f);
	printf("------\n");
	g=a*b;
	printf("% d",g);
	return 0;
}
