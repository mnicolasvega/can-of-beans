#include <stdio.h>
#include <limits.h>

int main() {
	printf("%2ld bytes in          char   - [%d, %d]\n",     sizeof (char),               SCHAR_MIN, SCHAR_MAX);
	printf("%2ld bytes in unsigned char   - [%d, %d]\n",     sizeof (unsigned char),      0, UCHAR_MAX);
	printf("%2ld bytes in          short  - [%d, %d]\n",     sizeof (short),              SHRT_MIN, SHRT_MAX);
	printf("%2ld bytes in unsigned short  - [%d, %d]\n",     sizeof (unsigned short),     0, USHRT_MAX);
	printf("%2ld bytes in          int    - [%d, %d]\n",     sizeof (int),                INT_MIN, INT_MAX);
	printf("%2ld bytes in unsigned int    - [%d, %d]\n",     sizeof (unsigned int),       0, UINT_MAX);
	printf("%2ld bytes in          long   - [%ld, %ld]\n",   sizeof (long),               LONG_MIN, LONG_MAX);
	printf("%2ld bytes in unsigned long   - [%d, %ld]\n",    sizeof (unsigned long),      0, ULONG_MAX);
	printf("%2ld bytes in          llong  - [%lld, %lld]\n", sizeof (long long),          LLONG_MIN, LLONG_MAX);
	printf("%2ld bytes in unsigned llong  - [%d, %lld]\n",   sizeof (unsigned long long), 0, ULLONG_MAX);
	printf("%2ld bytes in          float\n",                 sizeof (float));
	printf("%2ld bytes in          double\n",                sizeof (double));
	printf("%2ld bytes in     long double\n",                sizeof (long double));
	return 0;
}