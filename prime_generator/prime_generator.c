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

void generatePrimes(unsigned long start, unsigned long end) {
	unsigned long n, m;
	for (n = min(2, start); n <= end; n ++) {
		if (isPrime(n)) {
			printf("%ld, ", n);
		}
	}
}

int main() {
	generatePrimes(0, 100);
	return 0;
}
