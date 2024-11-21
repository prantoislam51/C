


#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t); // Input number of test cases
    
    // Iterate through each test case
    for (int i = 0; i < t; i++) {
        char s[4];
        scanf("%s", s); // Input string
        
        // Count occurrences of each character
        int counts[3] = {0};
        for (int j = 0; j < strlen(s); j++) {
            if (s[j] == 'a') {
                counts[0]++;
            } else if (s[j] == 'b') {
                counts[1]++;
            } else if (s[j] == 'c') {
                counts[2]++;
            }
        }
        
        // If the string is already in order "abc", or all characters are present, return "YES"
        if (strcmp(s, "abc") == 0 || (counts[0] && counts[1] && counts[2])) {
            printf("YES\n");
            continue;
        }
        
        // If two characters are missing, it's not possible to rearrange into "abc"
        if (counts[0] == 0 || counts[1] == 0 || counts[2] == 0) {
            printf("NO\n");
            continue;
        }
        if (counts[0] == 1) {
            if ((s[0] == 'a' && s[1] == 'b' && s[2] == 'c') || (s[0] == 'b' && s[1] == 'a' && s[2] == 'c')) {
                printf("YES\n");
                continue;
            }
        } else if (counts[1] == 1) {
            if ((s[0] == 'b' && s[1] == 'a' && s[2] == 'c') || (s[0] == 'a' && s[1] == 'b' && s[2] == 'c')) {
                printf("YES\n");
                continue;
            }
        } else {
            if ((s[0] == 'c' && s[1] == 'b' && s[2] == 'a') || (s[0] == 'b' && s[1] == 'c' && s[2] == 'a')) {
                printf("YES\n");
                continue;
            }
        }  
        printf("NO\n");
    }
    return 0;
}
