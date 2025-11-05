#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<stdbool.h>
#define sizeTable 100


void lowerS(char *m){
    for (int i = 0 ; m[i] != '\0' ; i++) {
        m[i] = tolower(m[i]);   
    }
}


void hash(char *g , char *s){
    for (int i = 0 ; s[i] != '\0' ; i++) {
        g[i] = '-';   
    }
}


void lowerC(char *c) {
    *c = tolower(*c);
}

int indexx(char *m , char c){
    for (int i = 0 ; m[i] != '\0' ; i++){
        if(m[i] == c){
            return i;
        }
    }

    return 0;
}

bool verifier_tentative(char *m , char c){
    for (int i = 0 ; m[i] != '\0' ; i++){
        if(m[i] == c){
            return true;
        }
    }

    return false;

}

char *maj_mot_devine(char *s , char *g){
    for(int i = 0 ; s[i] != '\0' ; i++){
        if(verifier_tentative(s,g[i])){
            g[i] = s[i];
        }else{
            g[i] = '&';
        }
    }

    return g;
}

int main(int argv , char** argc){

int tentative = atoi(argc[1]);
char *mot_secret[sizeTable] = argc[2] , guess , mot_devine[sizeTable];

lowerS(mot_secret);
hash(mot_devine,mot_secret);

return 0;
}