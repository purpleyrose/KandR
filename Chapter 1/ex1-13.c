#include<stdio.h>

/* Write a program to print a histogram of the lengths of words in its input. */

#define IN 1
#define OUT 0

int main() {
    int c, state, i;
    int word_length[20];
    state = OUT;
    for(i = 0; i < 20; i++) {
        word_length[i] = 0;
    }
    while((c = getchar()) != EOF) {
        if(c == ' ' || c == '\t' || c == '\n') {
            state = OUT;
        } else if(state == OUT) {
            state = IN;
            word_length[0]++;
        } else {
            word_length[i]++;
        }
    }
    for(i = 0; i < 20; i++) {
        printf("%d: ", i);
        for(int j = 0; j < word_length[i]; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}