// Use array average of the companies salary
#include <stdio.h>
int main(){
    int employ;
    printf("How many Empoly Work in your Company: ");
    scanf("%d", &employ);
    int salary[employ];
    for (int i = 0; i < employ; i++){
        printf("Inter your %d Company salary: ", i);
        scanf("%d", &salary[i]);
    }
    int length = sizeof(salary) / sizeof(salary[0]);
    int sum = 0;
    for (int i = 0; i < length; i++){
        printf("%d\n", salary[i]);
        sum = sum + salary[i];
    }
    printf("%d\n",sum);
    float avg = sum / length;
    printf("Your Avariage is %f TK",avg);
}