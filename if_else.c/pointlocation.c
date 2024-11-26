#include<stdio.h>
int main(){
    int x,y;
    printf("enter the coordinates");
    scanf("%d",&x);
    scanf("%d",&y);
    if (x==0 && y==0){
        printf ("the point is at origin");
    
    }
    else if (y==0){
        printf("the point is at x axis");
    }
    else if (x==0) {
        printf("the point is at y axis");
    }
    else {
        printf("the point does not lie on x or y axis");
    }
    return 0;
}