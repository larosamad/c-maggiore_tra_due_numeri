// Dati in input due numeri scrivere un programma in linguaggio C che stampi a video il maggiore tra i due numeri
#include <stdio.h>

int main (void) {
    int a, b;

    printf("Inserisci numero");
    scanf("%d", &a);

    printf("Inserisci numero");
    scanf("%d", &b);

    if(a > b) 
        printf("Il numero maggiore è %d", a);
    else
        printf("Il numero maggiore è %d", b);
    
    return 0;
}
