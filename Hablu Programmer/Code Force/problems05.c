


#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000];
    scanf("%c", s);
    int n = strlen(s);
    int a[26] = {0};

    for(int i = 0; i < n; i++)
    {
        if(s[i] >= 'a' && s[i] <= 'z')
            a[s[i] - 'a'] = 1;
    }
    int count = 0;
    for(int i = 0; i < 26; i++)
    {
        if(a[i] == 1)
            count++;
    }

    printf("%d\n", count);
    
    return 0;
}
