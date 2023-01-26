#import <stdio.h>

int main() {
    int n, i, j, k = 0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) k++;
        for (j = 1; j <= n; j++) {
            if (i % 2 == 1) printf("*");
            else if (i % 2 == 0) {
                if ((k % 2 == 1 && j == n) || (k % 2 == 0 &&j == 1))
                    printf("*"); else if ((k % 2 == 1 && j != n) || (k % 2 == 0 && j != 1)) printf(" ");
            }
        }
        printf("\n");
    }
}