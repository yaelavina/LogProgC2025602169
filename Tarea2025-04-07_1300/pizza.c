#include <stdio.h>


int main() {
    char pizzavegetariana[4];
    char ingrediente[20];

    printf("¿Desea una pizza vegetariana? (si/no): ");
    scanf("%s", pizzavegetariana);

    if (strcmp(pizzavegetariana, "si") == 0) {
        printf("Elija un ingrediente entre pimiento y tofu: ");
        scanf("%s", ingrediente);

        if (strcmp(ingrediente, "pimiento") == 0) {
            printf("La pizza es vegetariana y lleva mozzarella, tomate y pimiento.\n");
        } else {
            printf("La pizza es vegetariana y lleva mozzarella, tomate y tofu.\n");
        }
    } else if (strcmp(pizzavegetariana, "no") == 0) {
        printf("Elija un ingrediente entre peperoni, jamon y salmon: ");
        scanf("%s", ingrediente);

        if (strcmp(ingrediente, "peperoni") == 0) {
            printf("La pizza no es vegetariana y lleva mozzarella, tomate y peperoni.");
        } else if (strcmp(ingrediente, "jamon") == 0) {
            printf("La pizza no es vegetariana y lleva mozzarella, tomate y jamon.");
        } else {
            printf("La pizza no es vegetariana y lleva mozzarella, tomate y salmon.");
        }
    }

    return 0;
}
