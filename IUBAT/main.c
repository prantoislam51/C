

#include <stdio.h>

int sum(int a, int b, int c){
    int totalSum = a+ b+ c;
    int avg = totalSum / 3;
    return avg;
}

int main(){
    int a,b,c;
    printf("Inter 1st Number: ");
    scanf("%d",&a);
    printf("Inter 2nd Number: ");
    scanf("%d",&b);
    printf("Inter 3rd Number: ");
    scanf("%d",&c);

    int avg = sum(a,b,c);
    printf("%d\n",avg);
}