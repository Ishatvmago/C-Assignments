#include <stdio.h>
int main () {
    int x,y,z,n;
    printf("number 1");
    scanf("%d",&x);
    printf("number 2");
    scanf("%d",&y);
    printf("number 3");
    scanf("%d",&z);
    printf("number 4");
    scanf("%d",&n);
    if (x>y && x>z && x>n){
        printf("number 1 will be greater");
    }
    if (y>x && y>z && y>n){
        printf("number 2 will be greater");
    }
    if (z>x && z>y && z>n){
        printf("number 3 will be greater");
    }
    if (n>x && n>y && n>z) {
        printf(" number 4 will be greater");
    }
    return 0;
}