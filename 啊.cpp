#include <stdio.h>
int main (){

    const double PI=3.14;
    double r,v;

    printf("请输入r\n");
    scanf("%f",&r);

    v=4.0/3.0*r*r*r*PI;

    printf("v=%.5f",v);
    return 0;
}
