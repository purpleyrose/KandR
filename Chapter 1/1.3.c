#include <stdio.h>

int main() {
    float fahr, celsius;
    float lower, upper, step;
    lower = 0;   /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20;   /* step size */
    fahr = lower;
    printf("Fahrenheit\tCelsius\n");
    printf("----------\t-------\n");
    while(fahr <= upper) {
        celsius = 5* (fahr-32) / 9;
        printf("%4.0f\t\t%4.1f\n", fahr, celsius);
        fahr += step;
    }
    printf("----------\t-------\n");
    return 0;
}