#include <stdio.h>
#include "mcu_macros.h"

void rev(char tab[]) {
    int length;  
    char cop[MAXLINE];
    int i;

    
    for (i = 0; tab[i] != '\0'; i++) {
        cop[i] = tab[i];
    }

    length = i;

    for (i = 0; i < length; i++) {
        tab[i] = cop[length - 1 - i];
    }
}
  

  
