#include <stdio.h>
// Write a function that takes two int* arguments and swaps them.

void swap_machine(int *a, int *b) {
    // Deref a and store in c so we don't lose it
    int c = *a;
    // Set value of a to be value of b
    *a = *b;
    // set value of a to be c (which contains the value of a)
    *b = c;
}

int main(void) {
    int a = 1;
    int b = 2;

    swap_machine(&a, &b);

    printf("a = %i\nb = %i\n", a, b);
}