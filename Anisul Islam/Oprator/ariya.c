
// Area of a triangle------
// ত্রিভুজের ক্ষেত্রফল

#include <stdio.h>
int main(){
    float height,width,result;
    printf("Inter Height And Width: ");
    scanf("%f%f",&height,&width);
    // result = (float)1/2 * (height*width)
    result = (height*width)/2;
    printf("Area of a triangle is: %.2f\n",result);
    return 0;
    
}