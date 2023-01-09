#include <stdio.h>
#include <stdlib.h>

int main() {
    int length, result = 0;
    printf("Enter length: ");
    scanf("%d", &length); // получение от пользователя размера массива
    if (!(length >= 1 && length <= 100)) { // проверка на условия
        return 1;
    }
    int *array = (int *) malloc(length); // Выделение памяти для массива


    for (int i = 0; i < length; i++) {
        printf("array[%d]", i); // Заполнение массива
        scanf("%d", &array[i]);
    }
    printf("\n");

    for (int i = length; i >= 0; i--) { //отсортируем негативные числа
        if (array[i] < 0) {
            result++;
            printf("The result: %d of negatives", result);
        }
    }
    printf("\n");

    if (result == 0) {
        printf("NO");
        return 0;
    }
    printf("\n");

    for (int i = length; i >= 0; i--) {
        if (array[i] < 0) {
            printf("%d ", array[i]);
        }
    }
    printf("\n");

    free(array);

    return 0;
}
