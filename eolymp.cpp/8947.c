#import <stdio.h>
#include <stdbool.h>

bool isAsterics(const size_t x, const size_t y, const size_t n){
    if(y % 2 == 0)
        return true;
    if (y % 4 == 1 && x == n - 1 || y % 4 == 3 && x == 0)
        return true;
    return false;

}

int main() {
    int n = 0;
    scanf("%lu", &n);

        for (size_t i = 0; i < n; ++i ){
            for (size_t j = 0; j < n; ++j)
            printf("%c", isAsterics(j, i, n) ? '*' : ' ');
            printf("\n");
        }
    return 0;
    }
