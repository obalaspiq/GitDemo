#include <stdio.h>

#define SUPER_SECRET_KEY "FIXME"

int
factorial(int n) {
	if (n == 0) return 1;
	return n * factorial(n - 1);
}

int
main(int argc, char **argv) {
	printf("Hello, World!\n");
	return 0;
}
