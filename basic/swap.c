#include <stdio.h>
int main()
{
    int a,b,temp;
    printf("enter a number: ");
    scanf("%d",&a);
    printf("enter another number: ");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("swapped values %d %d",a,b);
    return 0;
}
