

// #include <stdio.h>
// int main(){
//     int array[5] = {55,87,56,21,69};
//     for(int i = 0; i < 5; i++){
//         printf("%p\n", &array[i]);
//     }
// }

// #include <stdio.h>
// int main(){
//    int myNumbers[4] = {25, 50, 75, 100};
//     for (int i = 0; i < 4; i++) {
//       printf("%p\n", &myNumbers[i]);
//     }
// }


#include <stdio.h>
int main(){
    int array [8] = {25,67,98,78,25,46,98,25};
    int *pointter =array;
    for(int i = 0; i < 8; i++){
        printf("%d\n", *(pointter + i));
    }
}
