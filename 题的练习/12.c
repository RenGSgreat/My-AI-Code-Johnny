#include <stdio.h>
int main()
{
    int a;
    int g, s, b, q;

    scanf("%d", &a);
    
    g = a % 10;
    s = a / 10 % 10;
    b = a /100 % 10;
    q = a /1000;

    printf("%d %d %d %d",g, s, b, q);

    return 0;




}