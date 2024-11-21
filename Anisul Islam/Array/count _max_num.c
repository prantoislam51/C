


#include <stdio.h>
int main(){

    int count = 0;
    int array [7] = {1,2,3,4,5,6,7};
    for (int i = 0; i < 7; i++){
        if(array [i] < 5){
            printf("%d\n",array[i]);
            // count++;
        }
    }
    printf("Total number = %d",count);
}