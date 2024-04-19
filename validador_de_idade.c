/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int idade, contador = 1, comparador = 0;
  
  while(contador <= 5){
      printf("digite a %iº idade: ", contador);
      scanf("%i", &idade);
      
      if(idade >= 18){
          comparador++;
      }
      contador++;
  }
  
  printf("você cadastrou %i pessoas maior de idade", comparador);
  
}
