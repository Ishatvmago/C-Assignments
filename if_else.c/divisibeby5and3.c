#include <stdio.h>
int main (){
    int x;
    printf("enter a number");
    scanf("%d",&x);
    /*if(x%5==0){
        printf("the number is divisible by 5");
    }
    if(x%3==0){
        printf("the number is divisible by 3");
    }
    if (x%5==0 && x%3==0){
        printf("number is divisible by both 5 and 3");
    }**/
   if (x%5==0 || x%3==0){
    printf("the number is divisible either with three or with five");
   }
   else {
    printf("the number is not divisible by three or five");
   }
    
    return 0;
}