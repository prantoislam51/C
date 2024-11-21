#include <stdio.h>
int main(){

    int number;
    printf("Inter The Number Of Partan: ");
    scanf("%d",&number);
    for (int i = 0; i < number; i++)
    {
        for (int j = 0;j < i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}