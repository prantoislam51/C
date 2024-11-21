#include<stdio.h>
#include<string.h>
int main()
{
    char str[10];
    
    printf("Enter the string: ");
    gets(str);
    int leng = sizeof(str) / sizeof(str[0]);
    for(int i=0; i <= leng ; i++)
    {
        if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            printf("*");
        }
        else
        {
            printf("%c",str[i]);
        }
    }
    return 0;
}