#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    printf("Enter mark: ");
    scanf("%d",&n);
    {
        if(n>100 || n<0)
        printf("Invalid number");
        else if(n>=80 && n<=100)
        printf("A");
        else if(n>=60 && n<=79)
        printf("B");
        else if("n>=40 && n<=59")
        printf("C");
        else
        printf("F");
    }
}