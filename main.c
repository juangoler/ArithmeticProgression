#include <stdio.h>

int main() {
    int pa[10], inicial, razao;

    printf("Digite o número inicial da PA: ");
    scanf("%d", &inicial);
    printf("Digite a razão da PA: ");
    scanf("%d", &razao);

    for(int i = 0; i < 10; i++) {
        pa[i] = inicial + i * razao;
    }

    printf("Os termos da PA são:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", pa[i]);
    }
    printf("\n");

    return 0;
}
