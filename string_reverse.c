#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *string_calloc(size_t size) {
    char *str = calloc(size, sizeof(char));
    if (str == NULL) {
        fprintf(stderr, "Out of memory");
        exit(EXIT_FAILURE);
    }
    return str;
}

void reverse(char *string, char *buffer) {
    int len = strlen(string);

    for (int i = (len - 1); i >= 0; i--) {
        *buffer = string[i];
        buffer++;
    }

    buffer = buffer - len;
}

int main(void) {
    char *buffer = string_calloc(4);
    char *input = "Ash";
    reverse(input, buffer);
    printf("%s\n", buffer);
    free(buffer);
}
