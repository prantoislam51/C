



#include <stdio.h>
int main(){
    int number = 8;

    for (int i = 1; i < number; i++)
    {

        for (int k = 0; k < number -i; k++)
        {
            printf(" ");
        }
        

        for (int j = 0; j < i; j++)
        {
            printf("%c",65+i);
        }
        printf("\n");
    }

    for (int i = number; i >= 1; i--)
    {

        for (int k = 0; k < number -i; k++)
        {
            printf(" ");
        }
        

        for (int j = 0; j < i; j++)
        {
            printf("%c",65+i);
        }
        printf("\n");
    }
}