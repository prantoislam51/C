

// #include <stdio.h>
// int main(){
//     char x[] = {'H','e','l','l','o','w'};
//     char y[] = "Hellow";
//     printf("%s\n",x);
//     printf("%s\n",y);
// }

// #include <stdio.h>
// int main() {
//     int input = 1000;
//     int sum = 0;
//     for (int i = 1; i <= input; i++) { 
//         sum += 2 * i;
//     }
//     printf("Sum of the first 1000 even numbers: %d\n", sum);
//     return 0;
// }








#include <stdio.h>
int main()
{
    int n;
    int t1 = 0, t2 = 1;
    int temp;
    temp = t1 + t2;
    scanf("%d", &n);
    printf("Fibonacci series: %d\n", temp);
    for(int i = 3; i <= n; i++)
    {
        printf("%d\n", temp);
        t1 = t2;
        t2 = temp;
        temp = t1 + t2;
    }
}














