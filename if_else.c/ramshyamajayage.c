#include <stdio.h>
int main (){
    int a,b,c;
    printf("age of ram");
    scanf("%d",&a);
    printf("age of shyam");
    scanf("%d",&b);
    printf("age of ajay");
    scanf("%d",&c);
    if (a<b && a<c){
        printf("ram is youngest");
    }
    if (b<a && b<c){
        printf("shyam is youngest");
    }
    if (c<a && c<b) {
        printf("ajay is youngest");
    }
    return 0;

}