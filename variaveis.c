#include <stdio.h>

int main(){
    char razao_social[100] = "marlon";
    char cnpj_cpf[20] = "61684608376";
    int idade;
    float peso;

    //idade = 25;
    //peso = 90;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite seu peso: ");
    scanf("%f", &peso);
    
    printf("Nome: %s \n", razao_social);
    printf("Idade: %d \n", idade);
    printf("Peso: %.2f \n", peso);
}