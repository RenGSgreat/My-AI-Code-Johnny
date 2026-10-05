#include <stdio.h> 
int main(){
	int c;
	int a=0;
	int b= 0;
while(scanf("%d",&c)!=EOF && c != -1){
    if(c%2==1){
    a++;
	}
	else{
    b++;
	}
	
}
printf("%d %d",a,b);
return 0;
}
