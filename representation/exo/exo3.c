void copie_chaine(char ssrc[], char sdest[]){
    int i;
    for(i = 0; ssrc[i] != '\o'; i++){
        sdest[i] = ssrc[i];
    }
}

int main(){
    char s1[15], s2[20];
    copie_chaine(s1, s2);
}