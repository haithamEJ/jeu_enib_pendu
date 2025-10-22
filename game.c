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

char maj_mot_devine(char *s , char *g){
    
}

void lowerC(char *c) {
    *c = tolower(*c);
}

bool verifier_tentative(char *m , char c){
    for (int i = 0 ; m[i] != '\0' ; i++){
        if(m[i] == c){
            return true;
        }
    }

    return false;

}
int main(){

int tentative;
char mot_secret[sizeTable] , guess;

printf("Joueur 1 , insere nombres de tentative : \n");
scanf("%d",&tentative);

printf("Joueur 1 , insere le mot secret : \n");
scanf("%s",mot_secret);
lowerS(mot_secret);

printf("Joueur 2 , insere le caractere : \n");
scanf(" %c",&guess);
lowerC(&guess);

if(verifier_tentative(mot_secret,guess)){
    printf("Exists");
}else{ printf("Nope");
};

return 0;
}