#include<stdio.h>
// Write a program to convert a string of hexadecimal digits (including an optional 0x or 0X) into its equivalent integer value. The allowable digits are 0 through 9, a through f, and A through F.
int htoi(char s[]) {
    int n = 0;
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i] >= '0' && s[i] <= '9') {
            n = n * 16 + (s[i] - '0');
        } else if(s[i] >= 'a' && s[i] <= 'f') {
            n = n * 16 + (s[i] - 'a' + 10);
        } else if(s[i] >= 'A' && s[i] <= 'F') {
            n = n * 16 + (s[i] - 'A' + 10);
        }
    }
    return n;
}

int main() {
    char hex_string[20];
    printf("Enter a hexadecimal string: ");
    scanf("%s", hex_string);
    int decimal_value = htoi(hex_string);
    printf("The decimal value is: %d\n", decimal_value);
    return 0;
}

