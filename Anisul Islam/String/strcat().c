
// strcat()
// #include <stdio.h>
// #include <string.h>
// int main(){
//     char first[] = "Md.Pranto ";
//     char last [] = "Islam";
//     int count = 0;
//     int i = 0;
//     while(first[i] != '\0'){
//         i++;
//         count++;
//     }
//     printf("%d\n",count);

// }








// Using Loop

// strcat()
#include <stdio.h>
#include <string.h>
int main(){
    char first[50] = "Md.Pranto ";
    char last [] = "Islam";
    int len = 0;
    int i = 0;
    while(first[i] != '\0'){
        i++;
        len++;
    }
    printf("%d\n",len);
    int j = 0;
    while(last[j] !='\0'){
        
        first[len + j]  = last[j];
        j++;
        
    }
    printf("%s\n",first);

}

