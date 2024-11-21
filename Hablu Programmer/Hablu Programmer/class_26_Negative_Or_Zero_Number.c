
// 26 C Programming Positive, Negative Or Zero Number



#include<stdio.h>
int main(){
    int x;
    jamp:
    printf("\n");
    printf("inter a number: ");
    scanf("%d",&x);
    if(x > 0){
        printf("%d is positive",x);
    }
    else if(x < 0){
        printf("%d is negative",x);
    }
    else{
        printf("%d is zero",x);
    }
    goto jamp;
}