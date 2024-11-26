#include <stdio.h>
int main(){
    int l,b,a,p;
    a=l*b;
    p=2*(l+b);
    printf("the length of a rectangle");
    scanf("%d",&l);
    printf("the breadth of a rectangle");
    scanf("%d",&b);
    if (a>p){
        printf("the area is greater");
    }
    if (a<p){
        printf("the perimeter is greater");
    }
    if (a==p){
        printf("both are equal");
    }
    return 0;

}