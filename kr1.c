#include <stdio.h>
int main()
{
    int a, b, max;
    max = 0;
    a = 0;
    
    scanf("%d", &b);
    
    while(a <= b)
    {

    max = max +a ;
    a++;

    }
    
    printf("%d %d", max, a);

    return 0;
}