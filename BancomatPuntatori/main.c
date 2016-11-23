#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int choice = 0;
int incremento = 0;

typedef struct op {
    //char *data;
    int numero;
    int addebitati;
    int accreditati;
    int saldostorico;
    struct op * next;
}Conto;

Conto *head = NULL;

//struct estratto *pconto;

void registra(int *saldo, int addebito, int accredito) {
    *saldo = *saldo - addebito + accredito;

    Conto *nuova_operazione;
    nuova_operazione = malloc(sizeof(Conto));
    nuova_operazione->numero = incremento + 1;
    nuova_operazione->addebitati = addebito;
    nuova_operazione->accreditati = accredito;
    nuova_operazione->saldostorico = *saldo;
    nuova_operazione->next = head;
    head = nuova_operazione;
    incremento++;
}

void prelievo(int *saldo) {
    int quantita;
    printf("Quanto vuoi prelevare? ");
    scanf("%d", &quantita);
    registra(saldo, quantita, 0);
}

void versamento(int *saldo) {
    int quantita;
    printf("Quanto vuoi versare? ");
    scanf("%d", &quantita);
    registra(saldo, 0, quantita);
}

void estrattoConto(Conto *head) {

    Conto * tmp = head;

    printf("ESTRATTO CONTO\n\n");
    printf("   Addebiti  Accrediti    Saldo\n");
    while(tmp!=NULL) {
        printf("%d |  %d$         %d$       %d$\n",tmp->numero , tmp->addebitati, tmp->accreditati, tmp->saldostorico);
        tmp = tmp->next;
    }
}

int main() {
    Conto *operazione;
    //head = malloc(sizeof(Conto));
    //head = NULL;

    int saldo = 10000;
    //pconto = &conto;

    while(choice != 4) {
        printf("BANCOMAT - Saldo: %d$\n\n", saldo);
        printf("Seleziona:\n");
        printf("1 - Prelievi\n");
        printf("2 - Versamenti\n");
        printf("3 - Estratto conto\n");
        printf("4 - Esci\n");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                prelievo(&saldo);
                break;
            case 2:
                versamento(&saldo);
                break;
            case 3:
                estrattoConto(head);
                break;
            case 4:
                break;
            default:
                break;
        }
    }

    return 0;
}