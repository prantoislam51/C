


#include <stdio.h>


void arr(int arr[],int z){
    for (int i = 0; i < z; i++){
        printf("%d ",arr[i]);
    }
};
int main(){
    int x;
    printf("Inter The array value: ");
    scanf("%d",&x);
    int y[x];
    for(int i=0; i < x; i++){
        printf("Inter the array %d value: ",i);
        scanf("%d",&y[i]);
    };
    arr(y,x);
    
}