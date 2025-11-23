#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    int i, j;

    printf("Enter string: ");
    gets(s);
    printf(s);

    i = 0;
    j = strlen(s) - 1;

    while(i < j) {
        if(s[i] != s[j]) {
            printf("\nNot palindrome");
            return 0;
        }
        i++; j--;
    }

    printf("\nPalindrome");
    return 0;
}
