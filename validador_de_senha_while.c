
#include <stdio.h>
#include <stdbool.h>

int main()
{
    bool fbasilio = true;
    int senha, compSenha;
        printf("Declare uma senha: ");
        scanf("%i",&senha);
        
    while(fbasilio == true){
        printf("Digite sua senha: ");
        scanf("%i", &compSenha);
        
        if(compSenha == senha){
            printf("senha correta !!");
            
            fbasilio = false; 
        } else{
            printf("senha incorreta!! \n");
        }
    }
}

