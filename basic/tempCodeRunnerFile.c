#include <stdio.h>
int main()
{
    int a,b,area;
    printf("enter the legnth: ");
    scanf("%d",&a);
    printf("enter the bredth: ");
    scanf("%d",&b);
    area=a*b;
    if (a==b){
        printf("The area of the square is %d",area);
    }
    else{
        printf("The area of the rectangle is %d",area);
    }
    
    return 0;
}
