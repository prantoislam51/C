

#include <stdio.h>
int main(){
    int x;
    printf("Inter A Number and Get Lucky Color: ");
    scanf("%d",&x);
    switch(x){
        case 1:
        printf("Yellow Color");
        break;
        case 2:
        printf("Red Color");
        break;
        case 3:
        printf("Blue Color");
        break;
        case 5:
        printf("Green Color");
        break;
        default:
        printf("Invalid Number");
    }

}