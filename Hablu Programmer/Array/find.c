


#include <stdio.h>
int main(){
    int array[5] = {10,50,34,644,65};
    int x;
    printf("Inter the find Number: ");
    scanf("%d",&x);
    for (int i = 0; i < 5; i++){
        printf("%d\n",array[i]);
    }
    printf("\n\n");

    for (int i = 0; i <= 5; i++){
        if (x == array[i]){
            printf("Find Number: %d\n",x);
        }
        else{
            printf("%d Can't find",x);
        }

        
    }
    
}



