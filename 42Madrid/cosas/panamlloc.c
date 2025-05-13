#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vector;
    int n = 5;

    vector = (int *)malloc(n * sizeof(int));  // Reserva memoria para 5 enteros

    if (vector == NULL) {
        printf("No se pudo asignar memoria.\n");
        return 1;
    }

    for (int i = 0; i < n; i++)
        vector[i] = i * 10;

    for (int i = 0; i < n; i++)
        printf("%d ", vector[i]);

    free(vector); // Libera la memoria
    return 0;
}
