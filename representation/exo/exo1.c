#define SIZE 12
int tsrc[SIZE], tdest[SIZE];

int main(){
    int i;
    for(i = 0; i < SIZE; i++){
        tsrc[i] = i + 1;
    }

    for(i = 0; i < SIZE; i++){
        tdest[i] = tsrc[i];
    }
    return 0;
}