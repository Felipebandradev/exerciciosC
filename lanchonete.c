
#include <stdio.h>

int main()
{
    float  quantidade, calculo, preco;
    
    int pedido;
    
printf("Digite o pedido: ");
scanf("%i", &pedido);
    
if (pedido >= 100 &&  pedido <= 106) {
    
         switch ( pedido ) {
case 100:
     preco = 1.20;
     printf("Cachorro Quente \n");
break;
  
case 101:
    preco = 1.30;
    printf("Bauru Simples \n");
break;
    
    case 102:
    
    preco = 1.50;
    printf("Bauru com ovo \n");
    
    break;
    
    case 103: 
    preco = 1.20;
    printf("Hamburguer \n");
    
    break;
    
    case 104: 
    
    preco = 1.70;
    printf("Cheeseburguer \n");
    
    break;
    
    case 105: 
    
    preco = 2.20;
    printf("Suco \n");
    
    break;
  
    case 106: 
    
    preco = 1.00;
    printf("Refrigerante \n");
    
    break;
    
    
}

    printf("Digite a quantidade: ");
    scanf("%f", &quantidade);
    
    calculo = preco * quantidade;
    
    printf("O valor do seu pedido é R$ %.2f",calculo);
    
    } else {
        printf("Essa comida não está disponível!!");
    }
    
  

}



