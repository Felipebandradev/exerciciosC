/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num1;    
    int num2;
    float calculo;
    char operacao;
    
   printf("Digite o 1º número: ");
   scanf("%i", &num1);
   
   printf("Digite o 2º número: ");
   scanf("%i", &num2);
   
   printf("Digite o tipo da opereção: ");
   scanf(" %c", &operacao);
   
   
   switch(operacao){
    case '*' : 
        calculo = num1 * num2;
        printf("Multiplicação %f", calculo);
    break; 
    
    case '/' :
    calculo = num1 / num2;
        printf("Divisão %f", calculo);
    break; 
    case '+' : 
         calculo = num1 + num2;
        printf("Soma %f", calculo);
    break; 
    case '-' :
     calculo = num1 - num2;
        printf("Subtração %f", calculo);
    break; 
    
    default: printf("Operação Não existe");
   }
   
}

