#include<stdio.h>

float celsius_to_fahr(float celsius) {
    return (celsius * 9.0 / 5.0) + 32.0;
}

int main() {
    float celsius, fahr;
    int lower, upper, step;
    lower = 0;   /* lower limit of temperature scale */
    upper = 100; /* upper limit */
    step = 5;   /* step size */
    celsius = lower;
    printf("Celsius\tFahrenheit\n");
    printf("-------\t----------\n");
    while(celsius <= upper) {
        fahr = celsius_to_fahr(celsius);
        printf("%3.0f\t%3.1f\n", celsius, fahr);
        celsius += step;
    }
    printf("-------\t----------\n");
    return 0;
}