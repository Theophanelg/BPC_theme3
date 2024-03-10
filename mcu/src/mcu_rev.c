#include <stdio.h>
#include "mcu_macros.h"
#include "exo6.h"
#include "mcu_readl.h"
#include "mcu_fatal.h"
#include "mcu_rev.h"


int main (void)
{
    char line[MAXLINE];
    while (readl(line) != EOF) {
        rev(line);
        printf("%s\n", line);
    }
    return 0;

}

