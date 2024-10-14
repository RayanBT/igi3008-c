#include <stdio.h>
#include <string.h>

int main(){
    char s[100];

    printf("Entrez une chaine de caractères :\n");
    fgets(s, 100, stdin);
    printf("La chaine de caractères récupérée dans s : %s\n", s);
    printf("composée de %ld caractères lus au clavier\n", strlen(s));

    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] != '\0')
        {
            printf("Caractere %d: %c\n",i,s[i]);
        }
    }
    
    
}