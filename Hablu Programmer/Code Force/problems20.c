


#include <stdio.h>

int main() {
    // Input
    int arr[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }
    // Sorting in ascending order using bubble sort
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    // First friend's travel distance from median point
    int firstFriendTravel = arr[1] - arr[0];
    // Third friend's travel distance from median point
    int thirdFriendTravel = arr[2] - arr[1];
    // Output
    printf("%d\n", firstFriendTravel + thirdFriendTravel);

    return 0;
}
