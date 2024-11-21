
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char strinng [20] = "hello world";
    char *strrint2;
    strrint2 = malloc(20 * sizeof(char));
    if (strrint2 == NULL)
    {
        printf("Couldn't allocate memory");
    }
    else{
        strcpy(strrint2,strinng);
    }
    printf("%s\n",strinng);
    printf("\n%s\n",strrint2);
    

}