#include <stdio.h>

#define SUPER_SECRET_KEY "FIXME"

int
factorial(int n) {
	if (n == 0) return 1;
	return n * factorial(n - 1);
}

int
main(int argc, char **argv) {
	printf("Hello, Factorial! %d\n", factorial(12));
	return 0;
}
