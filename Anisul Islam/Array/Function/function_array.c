

#include <stdio.h>

void fra(int a[]){
    a[3] = 10;
}

int main(){


    int arr[] = {10,30,20,33,18,44,32};
    printf("%d\n",arr[3]);
    fra(arr);
    printf("%d\n",arr[3]);
}







