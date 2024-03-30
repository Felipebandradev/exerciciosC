/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int nota;
    
    // entrada de dados
    printf("Digite a nota do aluno: ");
    scanf("%i", &nota);
    
    // saída de dados
    if(nota == 0) {
        printf("E");
    } else if ( nota >= 1 && nota <= 35){
        printf("D");
    
    } else if ( nota >= 36 && nota <= 60 ){
        printf("C");
    }
    else if ( nota >= 61 && nota <= 85 ){
        printf("B");
    } else  if ( nota >= 86 && nota <= 100 ) {
        printf("A");
    } else {
        printf("Número invalido para nota");
    }
}

