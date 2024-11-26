#include <stdio.h>
int main(){
    int x;
    printf("enter a number");
    scanf("%d",&x);
    x>99 && x<1000 ? printf("it is a three digit number"): printf("it is not a three digit number");
    return 0;
}