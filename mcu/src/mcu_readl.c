#include <stdio.h>
#include "mcu_fatal.h"

int readl(char line[]){
    int i;
    char n;
    for(i=0; i < MAXLINE - 1 && (n = getchar()) != EOF && n != '\n'; i++){
        line[i] = n;
    }
    line[i] = '\n';
    line[i+1] = '\0';
    if (i == MAXLINE - 1 && n != EOF && n != '\n') {
        fatal(LINETOOLONG, "Erreur : line too long\n", LINETOOLONG);
    }
    if (i < MAXLINE - 1 && n == EOF){
      return EOF;
    }
    return i;
}