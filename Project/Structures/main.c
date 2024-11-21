

#include <stdio.h>
#include <string.h>


struct range{
    int speed;
    int time;
    int num;
    char wor;
};
int main(){
    struct range apple;
    apple.speed = 130;
    apple.time = 2000;
    apple.num = 1;
    apple.wor = 'a';

    printf("%d\n",apple.speed);


    struct range banana;
    printf("Inter The Speed: ");
    scanf("%d",&banana.speed);
    printf("Inter The Time: ");
    scanf("%d",&banana.time);

    printf("%d\n",banana.speed);
    printf("%d\n",banana.time);


    



}