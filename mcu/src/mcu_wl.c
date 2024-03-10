#include <stdio.h>
#include "exo5.h"
#include "mcu_putint.h"

int main(){
  int ligne;
  ligne=countRetourLigne();
  putdec(ligne);
  putchar('\n');
  return 0;
}
