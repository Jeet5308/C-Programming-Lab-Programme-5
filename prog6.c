#include <stdio.h>
#include <string.h>
int main() {
    char s1[100], s2[100];
    printf("Enter first string: ");
    gets(s1);
    printf("Enter second string: ");
    gets(s2);
    int cmp = strcmp(s1, s2);
    if(cmp == 0) printf("Strings are equal.");
    else if(cmp > 0) printf("First string is greater.");
    else printf("Second string is greater.");
    return 0;
}