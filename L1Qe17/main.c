#include <stdio.h>

void preencheVetor(int vet[], int n){
    for(int i=0; i<n; i++){
        printf("Informe o %d valor: ", i+1);
        scanf("%d",&vet[i]);
    }
}
// Função Soma!
void somaVetor(int vet1[],int vet2[], int vetSoma[], int n){
    for(int i=0; i<n; i++){
        vetSoma[i] = vet1[i]+vet2[i];
    }
}
void imprimeVetor(int vetSoma[], int n){
    for(int i=0; i<n; i++){
        printf("%d ", vetSoma[i]);
    }
}

int main()
{
    int n;

    printf("Informe quantos valores tera os arrays: ");
    scanf("%d",&n);

    int vet1[n], vet2[n], vetSoma[n];
    printf("Informe os valores do vetor 1: \n");
    preencheVetor(vet1,n);
    printf("Informe os valores do vetor 2: \n");
    preencheVetor(vet2,n);
    somaVetor(vet1,vet2,vetSoma,n);
    printf("A soma dos vetores e: ");
    imprimeVetor(vetSoma,n);

    printf("\n\n");
    return 0;
}
