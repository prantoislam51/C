// #include <stdio.h>
// #include <stdlib.h>

// int main() {
//     int n; 
//     scanf("%d", &n);
//     int* arr = (int*)malloc(n * sizeof(int));

//     for(int i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for (int i = 0; i < n - 1; i++) {
//         for (int j = i + 1; j < n; j++) {
//             if (arr[i] > arr[j]) {
//                 int temp = arr[i];
//                 arr[i] = arr[j];
//                 arr[j] = temp;
//             }
//         }
//     }
//     int instability1 = arr[n-2] - arr[0];
//     int instability2 = arr[n-1] - arr[1];
//     int minInstability = (instability1 < instability2) ? instability1 : instability2;
//     printf("%d\n", minInstability);

//     free(arr);

//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n;
    scanf("%d", &n);

    int* arr = (int*)malloc(n * sizeof(int));
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    qsort(arr, n, sizeof(int), compare);
    int instability1 = arr[n-2] - arr[0];
    int instability2 = arr[n-1] - arr[1];

    int minInstability = (instability1 < instability2) ? instability1 : instability2;

    printf("%d\n", minInstability);

    free(arr);

    return 0;
}
