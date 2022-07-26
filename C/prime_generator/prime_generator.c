#include <stdio.h>
#include <math.h>

#define min(n1, n2) \
	(n1 >= n2) ? n2 : n1

#define false	0
#define true	1
#define boolean int

boolean isPrime(unsigned long n) {
	if (n <= 1) {
		return false;
	} else if (n == 2 || n == 3) {
		return true;
	}

	unsigned long m, limit;
	for (m = 2, limit = sqrt(n); m <= limit; m ++) {
		if (n % m == 0) {
			return false;
		}
	}

	return true;
}

void generatePrimes(unsigned long start, unsigned long end, unsigned long array_result[], int array_size) {
	unsigned long n = min(2, start);
	int i = 0;
	while (n <= end && i < array_size) {
		if (isPrime(n)) {
			array_result[i] = n;
			i ++;
		}
		n ++;
	}
	while (i < array_size) {
		array_result[i] = 0;
		i ++;
	}
}

void printResult(unsigned long array_result[], int size, char separator[], int last_digits) {
	int i = 0;
	if (last_digits > 0) {
		i = size - last_digits;
	}
	printf("Printing %d results:\n", (size - i));
	for ( ; i < size; i ++) {
		printf("%ld%s", array_result[i], separator);
	}
	printf("\n");
}

int main() {
	unsigned long result[100000];
	int size = sizeof (result) / sizeof (unsigned long);
	generatePrimes(0, 1000 * 1000 * 1000, result, size);
	printResult(result, size, ", ", 10);
	return 0;
}
