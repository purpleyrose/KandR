#include<stdio.h>

int main() {
    int c, n1, n2, n3;
    n1 = n2 = n3 = 0;

    while((c = getchar()) != EOF) {
        if(c == ' ')
            ++n1;
        else if(c == '\t')
            ++n2;
        else if(c == '\n')
            ++n3;
    }
    printf("Blanks: %d\nTabs: %d\nNewlines: %d\n", n1, n2, n3);
    return 0;
}