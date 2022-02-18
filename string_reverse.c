#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *reverse(char *string) {
    int len = strlen(string);
    char *p = calloc(len + 1, sizeof(char));

    for (int i = len; i >= 0; i--) {
        *p = string[i];
        p++;
    }

    p = p - len;
    
    char *result = p;

    return result;
}

int main(void) {
    char *string = "Ash";
    char *reversedString = reverse(string);
    printf("%s\n", reversedString);
}
