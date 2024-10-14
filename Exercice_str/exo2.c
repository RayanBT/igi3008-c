#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char s[100];

    printf("Entrez une chaine de caractères :\n");
    fgets(s, 100, stdin);
    printf("La chaine de caractères récupérée dans s : %s\n", s);
    int nbr = atoi(s);
    printf("après conversion : %d\n", nbr);
    printf("et multiplication par 2 : %d\n", nbr*2);  
    
}