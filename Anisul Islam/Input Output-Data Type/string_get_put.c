

// #include <stdio.h>
// int main(){
//     char name [100];
//     printf("Inter Your Full Nane: ");
//     fgets(name,sizeof(name),stdin);
//     printf("Your Full Name Is: ");
//     fputs(name,stdout);
// }


// Advance

// Easy to get Length------ Using (  printf("\n%d\n",len);    )
// Libery Using String ---- #include <string.h>

#include <stdio.h>
#include <string.h>
int main(){
    char name [100];
    printf("Inter Your Full Nane: ");
    fgets(name,sizeof(name),stdin);
    int len = strlen(name);
    
    printf("\n%d\n",len);

    printf("Your Full Name Is: ");
    fputs(name,stdout);
}