

#include <stdio.h>
#include <math.h>
int main(){
    float one_side,two_side,three_side,side,area;
    printf("Inter The Value Of Side One: ");
    scanf("%f",&one_side);
    printf("Inter The Value Of Side Two: ");
    scanf("%f",&two_side);
    printf("Inter The Value Of Side Three: ");
    scanf("%f",&three_side);
    side = (one_side + two_side + three_side) / 2;
    area = sqrt(side * (side - one_side) * (side - two_side) * (side - three_side));
    printf("The Area Of Triangle Is: %.2f",area);
}