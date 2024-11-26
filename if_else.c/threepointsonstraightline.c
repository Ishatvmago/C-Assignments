#include <stdio.h>
int main() {
    double x1,x2,y1,y2,x3,y3,m1,m2,AC;
    printf("point x1");
    scanf("%lf",&x1);
    printf("point x2");
    scanf("%lf",&x2);
    printf("point y1");
    scanf("%lf",&y1);
    printf("point y2");
    scanf("%lf",&y2);
     printf("point x3");
    scanf("%lf",&x3);
    printf("point y3");
    scanf("%lf",&y3);
    /*printf("slope m1");
    scanf("%lf",&m1);
    printf("slope m2");
    scanf("%lf",&m2);*/
    m1=(y2-y1)/(x2-x1);
    m2=(y3-y2)/(x3-x2);
    if (m1==m2){
        printf("line AC is straight");
    }
    else {
        printf("line AC is not straight");
    }
    return 0;
}