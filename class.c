#include <stdio.h>
int main(){
    int time1,time2,h,m,a,b,c,d,len;
    scanf("%d %d",&a,&b);
    printf("Enter time1 %d:%d",a,b) ;
    scanf("%d %d",&c,&d);
    printf("Enter time2 %d:%d",c,d) ;
    len=(c*60+d)-(a*60+b);
    h=len/60;
    m=len%60;
    printf("The train journey time is %d hours %d minutes\n",h,m);
    return 0;
}