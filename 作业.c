#include <stdio.h>
int main(){
   int a;
   int b;
   int h;
   int m;
   int g1s1,b1q1;
   int g2s2,b2q2;
   printf("Enter time1:") ;
   scanf("%d",&a);
   printf("Enter time2:") ;
   scanf("%d",&b);
   g1s1=a%100;
   b1q1=a/100;
   g2s2=b%100;
   b=b/100;
    h=b2q2-b1q1;
    
if(h<0){
	h=h+24;
}
else if(h>0){
	h=h;
}
   m=g2s2-g1s1;
if(m>0){
	m=m;
}
else if(m<0){
	h=h-1;
	m=m+60;
}
   printf("The train journey time is %d hours %d minutes",h,m);
    return 0;
} 
