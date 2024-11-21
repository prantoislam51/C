

#include <stdio.h>
#include <string.h>
int main(){
    char name_one [30] = "Pranto";
    char name_two [30];
    

    int i =0;
    int length = 0;
    while(name_one[i] != '\0'){
        length++;
        i++;
    }
    for (int j = 0, i = length-1; i>=0; i--, j++)
    {
        name_two[j] = name_one[i];
    }
    printf("%s\n",name_two);
    
    printf("%d\n",length);
}