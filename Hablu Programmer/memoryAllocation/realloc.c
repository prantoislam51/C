#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char rrs[40]="WWe Champione";
    char *my;
    my = calloc(50,sizeof(char));
    if (my == NULL)
    {
        printf("Some Thint is Errore");
    }
    else{
        strcpy(my,rrs);
    }
    printf("\n%s\n",rrs);
    printf("\n%s\n",my);
    my = realloc(my,100 *sizeof(char));
    strcpy(my,"My Name is Md.Pranto Islam");
    printf("%s\n",my);
    
}