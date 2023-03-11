#include <stdio.h>
int main(){
    int a,b,sub;
    printf("enter the 1st number: ");
    scanf("%d",&a);
    printf("enter 2nd number: ");
    scanf("%d",&b);
    if(a>b){
        sub=a-b;
        printf("difference of %d and %d is %d",a,b,sub);
    }
    else if (b>a)
    {
        sub=b-a;
        printf("difference of %d and %d is %d",b,a,sub);
    }
    
    return 0;

}