#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int isNumber(char *str) {
    int dotCount = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '.') {
            dotCount++;
        } else if (!isdigit(str[i])) {
            return 0;
        }
    }
    return dotCount <= 1;  // Only one decimal point allowed
}

int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Usage: %s num1 num2\n", argv[0]);
        return 1;
    }

    if (!isNumber(argv[1]) || !isNumber(argv[2])) {
        printf("Invalid input\n");
        return 1;
    }

    double a1 = atof(argv[1]);
    double a2 = atof(argv[2]);
    printf("%.4f\n", a1 * a2);

    return 0;
}
