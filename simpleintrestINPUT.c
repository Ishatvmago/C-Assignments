#include <stdio.h>
int main(){
    float SI;
    float principle;
    float rate;
    float time;
    printf("enter principle");
    scanf("%f",&principle);  
    printf("enter rate"); 
    scanf("%f",&rate);
    printf("enter time");
    scanf("%f",&time);
    SI= (principle*rate*time)/100;
    printf("enter simple interest %f",SI);
    return 0;
}