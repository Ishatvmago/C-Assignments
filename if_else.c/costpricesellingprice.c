#include <stdio.h>
int main(){
    int cp,sp;
    printf("enter cost price");
    scanf("%d",&cp);
    printf("enter selling price");
    scanf("%d",&sp);
    if(sp>cp){
        printf("its a profit");
    }
    if(cp>sp){
        printf("its a loss");
    }
    if (sp==cp){
        printf("amount recovered");
    }
    
    return 0;
}