#include <stdio.h> 
int main(){
	int a,b,c;	
	int Max;
	a=-99;b=-99;c=-99;
	scanf("%d,%d,%d",&a,&b,&c);
	Max=a;
	if(c>Max){
	Max=c;
	}
	if(b>Max){
	Max=b;
	}
	printf("%d\n",Max);
	return 0;
	
}
