#include<stdio.h>

int main() {
    float celsius, fahr;
    
    for(int i = 300; i >= 0; i -= 20) {
        fahr = i;
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%3.0f\t%6.1f\n", fahr, celsius);
    }
    return 0;
}