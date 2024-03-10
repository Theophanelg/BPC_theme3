#include <stdio.h>
#include "exo5.h"
#include "mcu_putint.h"

int main(){
  int car=countCar();
  putdec(car);
  putchar('\n');
  return 0;
}
