#include <stdio.h>
#include <stdlib.h>


void inputArray(int* array, int size) {
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
        array[i] = array[i] % 100;
    }
}

void printArray(int* array, int size) {
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void printArrayEvenIndex(int* arr, int size) {
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 1)
            printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int* array = NULL;
    int size = 0;

    scanf("%d", &size);

    array = (int*) malloc(size * sizeof(int));

    if (array == NULL) {
        printf("Memory is not allocated\n");
        exit(1);
    }

    inputArray(array, size);


    if (size / 2 == 0)
    {
        printf("NO\n");
    }
    else
    {
        printf("%d\n", size / 2);

        printArrayEvenIndex(array, size);

        printf("\n");

    }

    free(array);
}
