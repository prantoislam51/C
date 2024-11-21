

#include <stdio.h>
int main(){
    char x;
    printf("Inter A Letter: ");
    scanf("%c",&x);
    switch(x){
        case 'a':
        printf("This Letter Is Vowle: %c",x);
        break;
        case 'e':
        printf("This Letter Is Vowle: %c",x);
        break;
        case 'i':
        printf("This Letter Is Vowle: %c",x);
        break;
        case 'o':
        printf("This Letter Is Vowle: %c",x);
        break;
        case 'u':
        printf("This Letter Is Vowle: %c",x);
        break;
        case 'A':
        printf("This Letter Is Vowle: %c",x);
        break;
        case 'E':
        printf("This Letter Is Vowle: %c",x);
        break;
        case 'I':
        printf("This Letter Is Vowle: %c",x);
        break;
        case 'O':
        printf("This Letter Is Vowle: %c",x);
        break;
        case 'U':
        printf("This Letter Is Vowle: %c",x);
        break;
        default:
        printf("This Letter Is Consonant: %c",x);
    }
}