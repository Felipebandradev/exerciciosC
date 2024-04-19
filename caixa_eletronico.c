
#include <stdio.h>
#include <stdbool.h>

int main()
{
    int saldo = 0, saque, deposito, opcoes;
    bool validador = true;
    
    while(validador == true){
        printf("Digite uma Opção: \n");
        printf("1- Saldo \n");
        printf("2 - Saque \n");
        printf("3 - Deposito \n");
        printf("4 - Sair \n");
        
        printf("Opção: ");
        scanf("%i", &opcoes);
        
        switch(opcoes){
            case 1: 
             printf("Saldo: %i \n", saldo);
            break;
            case 2: 
            printf("Valor do Saque: ");
            scanf("%i", &saque);
            saldo = saldo - saque;
            printf("Novo Saldo: %i \n", saldo);
            break;
            case 3: 
            printf("Valor do depósito: ");
            scanf("%i", &deposito);
            saldo = saldo + deposito;
            printf("Novo saldo: %i \n",saldo);
            break;
            
            case 4:
            printf("Saindo obirgado por utilizar!! \n");
            validador = false;
            break;
        }
        
    }
    
}
