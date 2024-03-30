/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int diaDoMes;
    int mes;
    
    printf("Digite Quantos dias tem seu mês: ");
    scanf("%i", &diaDoMes);
    
    if ( diaDoMes >= 28 && diaDoMes <= 31){
        switch (diaDoMes){
          case 28: case 29:
          printf("mês 2 \n");
          printf("Fevereiro");
          break;
          
          case 30: 
          printf("mês 04, 06, 09, 11 \n");
            printf("Digite o mês desejado: ");
            scanf("%i",&mes);
  
           switch (mes) {
             
              case 4:
                    printf("Abril");
                break;
             
              case 6:
                    printf("Junho");
                break;
             
                case 9:
                    printf("Outubro");
                break;
               
                case 11:
                    printf("Novembro");
                break;
                
                 default: printf("mês inválido");
                
    

}
          break; 
          
          case 31: 
          printf("mês 01, 03, 05, 07, 08, 10, 12 \n");
            printf("Digite o mês desejado: ");
            scanf("%i",&mes);
  
          switch (mes) {
              case 1:
                    printf("Janeiro");
                break;
             
              case 3:
                    printf("Março");
                break;
             
              case 5:
                    printf("Maio");
                break;
             
              case 7:
                    printf("Julho");
                break;
                case 8:
                    printf("Agosto"); 
                break;
               
                case 10: printf("Setembro"); break;
            
                case 12:
                    printf("Dezembro");
                break;
                
                default: printf("mês inválido");
}
          break;
          
        }
    } else {
        printf("Quantidade de dias inválidos");
    }
    
}

