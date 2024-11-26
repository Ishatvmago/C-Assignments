#include <stdio.h>
int main(){
    int n;
    printf("enter a number");
    scanf("%d",&n);
    /*if (n%5==0 || n%3==0){
        if (n%15!=0){
            printf("the number will be divisible by 5 or 3 but not 15");
        }
        else{
            printf("the number will be divisible by 15");
        }
    }
    else {
        printf("the number will not be divisible 3 or 5");
    }
       /* printf("the number will be divisible by 5 or 3");
    }
    if (n%15==0) {
        printf("the number will be not be divisible by 15");
    }**/
   if ((n%5==0 || n%3==0) && n%15!=0){
    printf("the number is divisible by 5 or 3 but not 15");

   }
   else{
    printf("the number is not matching the required condition");
   }

    return 0;
}