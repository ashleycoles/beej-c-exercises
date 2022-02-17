#include <stdio.h>

int sum(int *arr, size_t len) {
    int total = 0;
    for (int i = 0; i < len; i++) {
        total += arr[i];
    }
    return total;
}

int main(void) {
    int arr[6] = {10, 5, 2, 30, 97, 64};
    // Find the length of the array by getting the size of the whole array / the size of each item in the array
    size_t arr_size = sizeof arr/sizeof(int);
    int result = sum(arr, arr_size);
    printf("%i\n", result);
}