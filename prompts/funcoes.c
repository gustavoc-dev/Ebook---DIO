#include <stdio.h>

int soma(int x, int y) {
    return x + y;
}

int main() {
    int resultado = soma(5, 3);
    printf("Resultado: %d", resultado);
    return 0;
}