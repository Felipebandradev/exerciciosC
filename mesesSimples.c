/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int mes;
  
  printf("Digite o mês desejado: ");
  scanf("%i",&mes);
  
 switch (mes) {
  case 1:
        printf("Janeiro");
    break;
  case 2:
        printf("Fevereiro");
    break;
  case 3:
        printf("Março");
    break;
  case 4:
        printf("Abril");
    break;
  case 5:
        printf("Maio");
    break;
  case 6:
        printf("Junho");
    break;
  case 7:
        printf("Julho");
    break;
    case 8:
        printf("Agosto"); 
    break;
    case 9:
        printf("Outubro");
    break;
    case 10: printf("Setembro"); break;
    case 11:
        printf("Novembro");
    break;
    case 12:
        printf("Dezembro");
    break;
    
    default: printf("Mês invalido");
}
}


