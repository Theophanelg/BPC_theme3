#include <stdio.h>

void read(){
    while(getchar() != EOF);
}

int countCar(){
    int nbLigne = 0;
    char car;
    while((car = getchar()) != EOF){
        nbLigne++;
    }
    return nbLigne;
}

int countRetourLigne(){
    int retourLigne = 0;
    char car;
    while((car = getchar()) != EOF){
        if(car == '\n'){
            retourLigne++;
        }
    }
    return retourLigne;
}
