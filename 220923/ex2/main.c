#include <stdio.h>

int main() {
    float n;
    float resultado;
    printf("Digite um numero: ");
    scanf("%f", &n);

    if(n > 0){
        printf("Numero selecionado e positivo");
    } else if(n < 0){
        printf("Numero selecionado e negativo");
    } else{
        printf("Numero selecionado e nulo");
    }
    return 0;
}
