#include<stdio.h>
int main()
{
    int number, people, capacity, c = 0;
    scanf("%d", &number);
    for(int i = 0; i < number; i++){
        scanf("%d %d", &people, &capacity);
        if(capacity - people >= 2)
            c++;
    }
    printf("%d\n", c);
    return 0;
}
