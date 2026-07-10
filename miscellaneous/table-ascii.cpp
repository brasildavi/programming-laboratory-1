#include <stdio.h>

int main() {
    printf("Table ASCII\n");
    printf("Dec\tHex\tChar\n");
    printf("------------------------\n");

    for (int i = 0; i <= 127; i++) {
        if (i < 32 || i == 127) {
            printf("%3d\t%02X\tControle\n", i, i);
        } else {
            printf("%3d\t%02X\t%c\n", i, i, i);
        }
    }
    return 0;
}