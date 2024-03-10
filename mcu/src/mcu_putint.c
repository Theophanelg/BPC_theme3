#include <stdio.h>

static int put_digit(int digit) {
    if (digit >= 0 && digit <= 9) {
        putchar(48 + digit);
        return 0;
    } else {
        return -1;
    }
}

int putdec(int d) {
    if (d < 0) {
        d = -d;
        if (putchar('-') == EOF)
            return -1;
    }

    if (d / 10 && putdec(d / 10) == -1) {
        return -1;
    }

    return put_digit(d % 10);
}
