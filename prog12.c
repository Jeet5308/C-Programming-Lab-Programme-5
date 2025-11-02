#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char str[100];
    int a=0, e=0, i_=0, o=0, u=0;
    printf("Enter a string: ");
    gets(str);
    for(int i=0; str[i]; i++) {
        char ch = tolower(str[i]);
        if(ch=='a') a++;
        else if(ch=='e') e++;
        else if(ch=='i') i_++;
        else if(ch=='o') o++;
        else if(ch=='u') u++;
    }
    printf("a:%d e:%d i:%d o:%d u:%d", a,e,i_,o,u);
    return 0;
}