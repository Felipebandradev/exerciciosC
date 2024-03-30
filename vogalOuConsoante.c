/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra e descubra se é vogal ou consoante: ");
    scanf("%c", &letra);

    if ((letra < 'a' || letra > 'z') && (letra < 'A' || letra > 'Z')) {
        printf("Isso não é uma letra e sim um número.");
    } else {
        switch (letra) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("Sua letra é uma vogal.");
                break;

            default:
                printf("Sua letra é uma consoante.");
        }
    }

    return 0;
}

