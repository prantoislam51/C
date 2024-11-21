// 31 C programming Display Fibonacci Sequence Bangla Tutorial
// 31 C programming Display Fibonacci Sequence Bangla Tutorial
#include <stdio.h>
int main(){
    int first_number,secound_number,count_range,store = 0;
    printf("Input The first number: ");
    scanf("%d",&first_number);
    printf("input the Secound number: ");
    scanf("%d",&secound_number);
    printf("Input The Range: ");
    printf("Inter The Count Range: ");
    scanf("%d",&count_range);
    for (int i = first_number; i <= count_range; i++)
    {
        // printf("%d \n",store);
        store = first_number + secound_number;
        printf("%d \n",store);
        first_number = secound_number;
        secound_number = store;
    }
}


    
