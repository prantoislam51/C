

#include <stdio.h>
int main(){
    int num[10] = {10,40,99,53,64,12,64,23,63,76};
    int length = sizeof(num) / sizeof(num[0]);
    for (int i = 0; i < length; i++)
    {
            if (num[i] > 30)
            {
                printf("%d\n",num[i]);
            }
    }
}