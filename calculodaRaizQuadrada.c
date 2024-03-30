/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    float numero;
    
    printf("Digite um número maior que 0 para descobrir a raiz quadrada: \n");
    scanf("%f", &numero);
    
    if (numero >= 0 ){
        
        
        printf("A raiz quadrada é: %f\n", sqrt(numero));
        
    } else{
        
        printf("Número invalido");
        
    }
}

