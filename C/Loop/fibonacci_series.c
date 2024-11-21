

#include <stdio.h>
int main(){
    int n;
    printf("Inter your Count Number: ");
    scanf("%d",&n);
    int first = 0;
    int secound = 1;
    int next = first + secound;
    printf("%d\n", first);
    printf("%d\n", secound);
    for(int i = 3; i <= n; i++){
        printf("%d\n", next);
        first = secound;
        secound = next;
        next = first + secound;
    }
}