#include <stdio.h> 
#include <math.h>
int main() {
	double money,year,rate,d,e;
	printf("Enter money, year and rate:");
    scanf("%lf %lf %lf",&money,&year,&rate);
    d=pow(1+rate,year)*money;
    e=d-money;
    printf("interest=%.2f",e);
    return 0;
}
