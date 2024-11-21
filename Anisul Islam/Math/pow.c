

#include <math.h>
#include <stdio.h>
int main(){
    int a,b;
    printf("Inter The Number: ");
    scanf("%d",&a);
    printf("Inter The Power: ");
    scanf("%d",&b);
    double result = pow(a,b);
    printf("The Result is: %.2lf",result);

    return 0;

}