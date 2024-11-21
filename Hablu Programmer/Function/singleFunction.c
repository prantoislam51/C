


#include <stdio.h>
int arr(int array[]){
    for (int i = 0; i < 6; i++){
        printf("%d\n", array[i]);
    };
    return 0;
}
int main(){
    int xx[6] = {10,30,40,50,60,70};
    arr(xx);
}