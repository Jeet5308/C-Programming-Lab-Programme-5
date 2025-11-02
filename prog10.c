#include <stdio.h>
int main() {
    char str[100];
    printf("Enter a string: ");
    gets(str);
    for(int i=0; str[i]; i++) printf("%c\n", str[i]);
    return 0;
}