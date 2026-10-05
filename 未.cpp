#include <stdio.h>
int main(void){
	int n;
	
	printf("请输入一个数");
	scanf("%d",&n);
if(n%2==0){
	printf("%d 偶数\n",n);
}
else {
	printf("%d 奇数\n",n);
}
return 0;
}

