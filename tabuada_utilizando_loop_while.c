
#include <stdio.h>
#include <stdbool.h>

int main()
{
    
    
    int num;
    int cont = 0;
    bool validador = true;
    
    while (validador == true){
            printf("digite valores de 1 á 10: \n");
            scanf("%i", &num);
        if ((num >= 1) && (num <= 10)){
    
        
            
            while ( cont <= 10){
                printf("%d x %d = %d \n", num, cont, num*cont );
                cont++;
            }
            
            validador = false;
        } else {
        printf("Numero invalido!! \n");
        }
        
    }

}


