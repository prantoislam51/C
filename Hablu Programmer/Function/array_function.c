

#include <stdio.h>


void arr(int num1 , int num2){
    int sum = num1 + num2;
    printf("%d ", num1);
    printf("%d ", num2);
    printf("\nSum = %d\n", sum);
};
int main(){
    int x [] = {0,1,2,3,4,5,6};
    arr(x[2],x[5]);
    
}