
// Bigger Number Find Array
#include <stdio.h>
int main(){
    int x[] = {90,29,3,46,55,6,56,8,98,12,11};
    int sum = 0;
    for (int i = 0; i < 11; i++)
    {
        printf("%d  ",x[i]);
        if (sum < x[i])
        {
            sum = x[i];
        }
    }
    printf("\nBigger Number: %d\n",sum);
    
    return 0;
}