#include <stdio.h>


int main(void){
    float vet[5] = {1.1,2.2,3.3,4.4,5.5};
    float *f;
    int i;
    f = vet;
    printf("contador/valor/valor/endereco/endereco");
    for(i = 0 ; i <= 4 ; i++){
    printf("\ni = %d",i);                   // sim contador
    printf("vet[%d] = %.1f",i, vet[i]);     // sim valor
    printf("*(f + %d) = %.1f",i, *(f+i));   // sim valor
    printf("&vet[%d] = %X",i, &vet[i]);     // sim endereço
    printf("(f + %d) = %X",i, f+i);         // sim endereço
    }
}
