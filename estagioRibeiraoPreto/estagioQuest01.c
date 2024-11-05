//Estágio - Ribeirão Preto Jonas Felipe Muniz Rodrigues
//Dado a sequência de Fibonacci, onde se inicia por 0 e 1 e o próximo valor sempre 
//será a soma dos 2 valores anteriores (exemplo: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34...), escreva um programa na linguagem que desejar onde, 
//informado um número, ele calcule a sequência de Fibonacci e retorne uma mensagem avisando se o número informado pertence ou não a sequência.
#include <stdio.h>

int verificaFibonacci(int buscaNumero);

int main(){
    int buscaNumero;

    printf("\n\t\tSequencia Fibonacci\nVamos ressaltar que a entrada deve ser um numero inteiro, pois não há numeros decimais na sequencia.\n");
    printf("Entre com um numero para verificarmos se faz parte da sequencia de Fibonacci: ");
    scanf("%d", &buscaNumero);

    if(verificaFibonacci(buscaNumero) == 1)
        printf("O numero %d pertence a sequencia de Fibonacci\n", buscaNumero);
    else
        printf("O numero %d não pertence a sequencia de Fibonacci\n", buscaNumero);
    return 0;
}

int verificaFibonacci(int buscaNumero){
    int a = 0, b = 1, c = 0;
    //colocando os casos bases 
    if(buscaNumero == 0) return 1; 
    if(buscaNumero == 1) return 1; 

    //calculando nossa sequencia 
    while(c < buscaNumero){
        c = a + b;
        a = b;
        b = c;
    }
    //verificando se ele esta ou não em nossa sequencia.
    if(c == buscaNumero) 
        return 1;
    else
        return -1;

}
