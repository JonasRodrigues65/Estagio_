//2) Escreva um programa que verifique, em uma string, a existência da letra ‘a’, seja maiúscula ou minúscula, 
//além de informar a quantidade de vezes em que ela ocorre.
#include <string.h>
#include <stdio.h>
#define MAXTAM 21

int main(){
    int cont = 0;
    char string[MAXTAM] = {"!!!!!!!!!!!!!!!!!!!!"}; //VERIFICANDO QUE NÃO TENHA NENHUM a COMO LIXO DE MEMORIA//colocando um limitador de 2o posições "\0" para fazer a entrada da string;
    printf("Entre com a string desejada\n");
    scanf("%s", string);

    
    for(int i = 0; i < MAXTAM; i++){
        if(string[i] == 'a' || string[i] == 'A')
            cont++;
            
    }
    printf("Na string %s, ");
    if(cont == 0)
        printf("não possui a letra A nesta string\n");
    else 
        printf("possui a letra A nesta string, e ela aparece %d vezes\n", cont);
    return 0;
}
