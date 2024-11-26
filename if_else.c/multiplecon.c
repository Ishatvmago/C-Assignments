#include <stdio.h>
int main(){
    int x;
    printf("enter a number");
    scanf("%d",&x);
    if (x>99 && x<1000){
        printf("the number is three digit");
    }
    else{
        printf("the number is not three digit");
    }
    return 0;

}