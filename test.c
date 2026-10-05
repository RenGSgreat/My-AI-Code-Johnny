#include <stdio.h>
int main(void){
    double c,f;
    printf("请输入摄氏度\n");
    scanf("%lf",&c);
    f=c*9.0/5.0+32.0;
    printf("%.3f摄氏度,%.3f华氏度\n",c,f);
    return 0;
}