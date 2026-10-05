#include <stdio.h> 
int main(void){
	double c,f;
	printf("输入摄氏度\n");
	scanf("%lf",&c);
	f=c*9.0/5.0+32.0;
	printf("%.2f摄氏度，%.2f华氏度\n",c,f);
	return 0;
	
	
	
}
