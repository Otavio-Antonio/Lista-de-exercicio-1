#include <stdio.h>

void soma(int a, int b){
    printf("%d + %d = %d \n",a,b,a+b);
}
void subtracao(int a, int b){
    printf("%d - %d = %d \n",a,b,a-b);
}
int main()
{
    void (*pf_vetor[])(int,int) = {soma,subtracao};
    int a=0, b=0, operacao;
    printf("Insira um valor: ");
    scanf("%d",&a);
    printf("\nInsira outro valor: ");
    scanf("%d",&b);
    printf("\nDigite 0 para soma e 1 para subtracao: ");
    scanf("%d",&operacao);

    while(operacao!=0 && operacao!=1){
        printf("\nValor invalido! Digite 0 para soma e 1 para subtracao: ");
        scanf("%d",&operacao);
    }
    (*pf_vetor[operacao])(a,b);

    return 0;
}
