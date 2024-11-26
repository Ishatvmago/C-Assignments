#include <stdio.h>
int main(){
    int r,s,a;
    printf("age of ram");
    scanf("%d",&r);
    printf("age of shyam");
    scanf("%d",&s);
    printf("age of ajay");
    scanf("%d",&a);
    if (r<s){
        if (r<a)
        printf(" ram is the youngest");
    else 
        printf("ajay is the youngest");
        

    }
    else
      if (s<a)
      printf("shyam is the youngest");
    else 
     printf("ajay is the youngest");
     return 0;
}