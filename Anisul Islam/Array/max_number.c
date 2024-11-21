
#include <stdio.h>
int main(){

    int arrray []= {10,20,50,11,44,29,99,46,13,33,21,9};
    int length = sizeof(arrray) / sizeof(arrray[0]);
    int num = 99;
    for (int i = 0; i < length; i++)
    {
        if (arrray[i] < num)
        {
            num = arrray[i];
        }
        
    }
    printf("%d",num);
    

}