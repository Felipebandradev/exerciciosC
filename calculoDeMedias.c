/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int nota1;
    int nota2;
    
   
    printf("Digite a Nota 1: \n");
    scanf("%i", &nota1);
    
    printf("Digite a Nota 2: \n");
    scanf("%i", &nota2);
    
    if (nota1  <= 10 && nota2 <= 10 ) {
    int soma = nota1 + nota2;
    float media = soma/2;
    
    if(media >= 6){
        printf("Aprovado");
    }else if(media >= 4 && media < 6 ){
        printf("Recuperação");
    } else {
      printf("Reprovado(a)");   
    }
    } else{
        printf("Valores Inválidos as notas devem conter valores de 0 a 10");
    }

}


