#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int giorni;
    int persone;
    char abitacolo;
    char veicolo;
} Campeggiatore;

float calcolo(Campeggiatore *camp) {
    float totale = 5 * camp->persone * camp->giorni;
    switch (camp->abitacolo) {
        case 'T':
            totale += 4 * camp->giorni;
            break;
        case 'R':
            totale += 4.50 * camp->giorni;
            break;
    }
    switch (camp->veicolo) {
        case 'A':
            totale += 5.50 * camp->giorni;
            break;
        case 'M':
            totale += 3.50 * camp->giorni;
            break;
    }
    return totale;
}

int main() {
    Campeggiatore *camp;
    camp = malloc(sizeof(Campeggiatore));
    printf("Dichiara il numero di giorni trascorsi al camping: ");
    scanf("%d", &camp->giorni);
    printf("Dichiara il numero di persone formanti il gruppo: ");
    scanf("%d", &camp->persone);
    printf("Dichiara il tipo di abitacolo (Scrivi T per la tenda o R per la roulotte): ");
    scanf(" %c", &camp->abitacolo);
    printf("Dichiara il tipo di veicolo (Scrivi A per l'auto o M per la moto): ");
    scanf(" %c", &camp->veicolo);

    float conto = calcolo(camp);
    printf("\nTotale da pagare: Euro %.2f\n", conto);
    return 0;
}