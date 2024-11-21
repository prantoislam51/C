#include <stdio.h>
#include <ctype.h>
int main() {
  char str[100];
  int i;
  printf("Enter a string: ");
  fgets(str, 100, stdin);
  for (i = 0; str[i] != '\0'; i++) {
    if (toupper(str[i]) == 'A' || toupper(str[i]) == 'E' || toupper(str[i]) == 'I' ||
        toupper(str[i]) == 'O' || toupper(str[i]) == 'U') {
      str[i] = '*';
    }
  }
  printf("String with vowels replaced by '*': %s\n", str);
  return 0;
}















