#include <stdio.h>
int main()
{
    int a,b,div;
    printf("enter the divident: ");
    scanf("%d",&a);
    printf("enter the divisor: ");
    scanf("%d",&b);
    div=a/b;
    printf("division of %d and %d is %d",a,b,div);

    return 0;
}