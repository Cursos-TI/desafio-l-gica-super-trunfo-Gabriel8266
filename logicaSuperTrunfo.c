#include <stdio.h>

int main() {
    int populacao1, populacao2;
    char cidade1[] = "Curitiba";
    char cidade2[] = "Brasília";

    // Solicita a população das duas cidades
    printf("Digite a população de %s: ", cidade1);
    scanf("%d", &populacao1);

    printf("Digite a população de %s: ", cidade2);
    scanf("%d", &populacao2);

    // Compara e mostra qual cidade venceu
    printf("\nResultado da comparação:\n");

    if (populacao1 > populacao2) {
        printf("%s venceu com maior população!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("%s venceu com maior população!\n", cidade2);
    } else {
        printf("Empate! As duas cidades têm a mesma população.\n");
    }

    return 0;
}