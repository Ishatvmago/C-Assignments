#include <stdio.h>
int main(){
    int a,b,c;
    printf("side 1");
    scanf("%d",&a);
    printf("side 2");
    scanf("%d",&b);
    printf("side 3");
    scanf("%d",&c);
    /*if (a==b && a==c){
        printf("it will be a triangle");
    }
    else{
        printf("it will not be a triangle");
    }**/
   if ((a+b)>c && (b+c)>a && (a+c)>b){
    printf("valid triangle");
   }
   else{
    printf("not valid triangle");
   }
   
    return 0;
}