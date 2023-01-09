#include <stdio.h>
#include <memory.h>
#include <stdbool.h>
#define N_LIMIT 100

int main()
{

    int size = 0;
    scanf("%d",&size);


    bool seen[N_LIMIT* 2 +1];
    memset(seen, 0, N_LIMIT * 2 + 1);

    for (size_t i = 0; i < size; ++i) {
        int element = 0;
        scanf("%d",&element);

        if (!seen[element + 100])
            printf("%d ", element);
        seen[element + 100] = true;

    }
}