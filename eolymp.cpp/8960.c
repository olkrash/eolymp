#include <stdio.h>
#include <stdlib.h>

void inputArr(int* array, int size) {
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
}

int main(){
    int* array = NULL;
    int size = 0;

    scanf("%d", &size);

    array = (int*) malloc(size * sizeof(int));
    if (array == NULL) {
        printf("Mem is not allocated\n");
        exit(0);
    }

    inputArr(array, size);

    int biggest = 0;
    int smallest = 0;
    for (int i = 0; i < size; i++)
    {
        if (i == 0) {
            smallest = array[i];
            biggest = array[i];
        }
        if (array[i] > biggest)
            biggest = array[i];

        if (array[i] < smallest)
            smallest = array[i];
    }

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        int add = 0;
        if (!(array[i] == smallest || array[i] == biggest)) {
            add = array[i];
        }
        sum += add;
    }
    printf("%d\n", sum);

    free(array);

}