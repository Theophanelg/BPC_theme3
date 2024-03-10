#include <stdio.h>

int copie(char ch1[], char ch2[]){
  int i;
  for(i = 0; ch1[i] != '\0' && ch2[i] != '\0' && ch1[i] == ch2[i]; i++) {
  }

  if(ch1[i] == '\0' && ch2[i] == '\0'){
    return 0;
  }
  return 1;
}
 
