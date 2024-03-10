#include <stdio.h>
#include "mcu_macros.h"
void fatal(int assert, const char message[], int status){
   if(assert){
        int i;
        for(i=0; i != '\0'; i++){
            putchar(message[i]);
        }
    }
    exit(status);
}