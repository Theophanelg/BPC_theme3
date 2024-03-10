#define SIZE 12

void copie(int tsrc[SIZE], int tdest[SIZE]){
    int i;
    for(i = 0; i < SIZE; i++){
        tdest[i] = tsrc[i];
    }
}

int main(){
    int tsrc[SIZE], tdest[SIZE];
    copie(tsrc, tdest);
}