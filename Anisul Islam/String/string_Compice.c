

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char name_One [] = "Pranto";
    char name_Two [] = "Pranto";

    int d = strcmp(name_One,name_Two);
    if (d == 0)
    {
        printf("Its Alrady Added: %s",name_One);
    }
    else{
        printf("Ok It not avable");
    }
    
}