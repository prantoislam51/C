

#include <stdio.h>
int main(){
int number,sum = 0;
printf("Inter Any Number: ");
scanf("%d",&number);
int tempNumber = number;
int reminder = 0;

while(tempNumber != 0){
    reminder =  tempNumber % 10;
    sum = sum + reminder;
    tempNumber = tempNumber / 10;
}

printf("Sum of %d is %d",number,sum);
}

