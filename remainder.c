#include <stdio.h>
int main(){
    int a,b;
    printf("enter divident");
    scanf("%d",&a);
    printf("enter divisor");
    scanf("%d",&b);
    //int q= a/b;
    //int r= a-(b*q);
    //printf("the remainder when %d is divided by %d is %d",a,b,r);
    int r= a%b;
    printf("the remainder when %d is divided by %d is %d",a,b,r);
     return 0;

}