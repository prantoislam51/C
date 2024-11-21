
#include <stdio.h>
int main(){
    int enmolyNumber;
    printf("Inter your Total Empoly Number: ");
    scanf("%d",&enmolyNumber);
    int array[enmolyNumber];
    int total = 0;
    for(int i = 0; i < enmolyNumber; i++){
        printf("Enter your %d number: ",i+1);
        scanf("%d",&array[i]);
    };
    for(int i = 0; i < enmolyNumber; i++){
        printf("\n%d\n",array[i]);
        total += array[i];
    };
    float avg = total/enmolyNumber;
    printf("Total Avarage Is %f",avg);
    return 0;

}