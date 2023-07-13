#include <stdio.h>

int main() {
    printf("Size of a char: %zu bytes\n", sizeof(char));
    printf("Size of a short: %zu bytes\n", sizeof(short));
    printf("Size of an int: %zu bytes\n", sizeof(int));
    printf("Size of a long: %zu bytes\n", sizeof(long));
    printf("Size of a long long: %zu bytes\n", sizeof(long long));
    printf("Size of a float: %zu bytes\n", sizeof(float));
    printf("Size of a double: %zu bytes\n", sizeof(double));
    printf("Size of a long double: %zu bytes\n", sizeof(long double));

    return 0;
}
