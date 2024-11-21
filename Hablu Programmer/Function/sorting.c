

#include <stdio.h>
int shorting(int arr[], int size) {
    int stor;
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // value change/swaping ---- 
                stor = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = stor;
            }
        }
    }
    return 0;
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i;
    printf("Array: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    shorting(arr, size);

    printf("\n Array sorting: ");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
