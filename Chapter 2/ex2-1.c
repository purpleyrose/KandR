#include<stdio.h>
#include<limits.h>
#include<float.h>

// Write a program to determine the ranges of char, short, int, and long variables, both signed and unsigned, by printing appropriate values from standard headers and by direct computation. Harder if you compute them: determine the ranges of the various floating-point types.

int main() {
    printf("Ranges of char:\n");
    printf("Signed char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Unsigned char: 0 to %d\n", UCHAR_MAX);

    printf("\nRanges of short:\n");
    printf("Signed short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Unsigned short: 0 to %d\n", USHRT_MAX);

    printf("\nRanges of int:\n");
    printf("Signed int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Unsigned int: 0 to %u\n", UINT_MAX);

    printf("\nRanges of long:\n");
    printf("Signed long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Unsigned long: 0 to %lu\n", ULONG_MAX);

    printf("\nRanges of float:\n");
    printf("Minimum positive normal float: %e\n", FLT_MIN);
    printf("Maximum float: %e\n", FLT_MAX);
    printf("Precision (number of decimal digits): %d\n", FLT_DIG);

    printf("\nRanges of double:\n");
    printf("Minimum positive normal double: %e\n", DBL_MIN);
    printf("Maximum double: %e\n", DBL_MAX);
    printf("Precision (number of decimal digits): %d\n", DBL_DIG);

    return 0;
}