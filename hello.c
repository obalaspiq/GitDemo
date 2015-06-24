#include <stdio.h>

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main(int argc, char **argv) {
    printf("Hello, Factorial! %d\n", factorial(12));
}
