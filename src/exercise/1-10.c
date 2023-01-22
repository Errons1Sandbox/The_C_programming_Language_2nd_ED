#include<stdio.h>

#define TRUE 1
#define FALSE 0
#define SP 32  //Dec value for space

int main() {
    int c;
    int replace = FALSE;

//    Loops through the terminal sentence as a stream one char at the time
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            putchar('\\');
            putchar('t');
            continue;
        }
        else if (c == '\b') {
            putchar('\\');
            putchar('\\');
            continue;
        }

        putchar(c);
    }

    return 0;
}