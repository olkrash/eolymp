#include <stdio.h>

void printNumber(int num) {
    int division = 2;
    while (num != 1){
        while (num % division == 0){
            printf("%d\n", division);
            num /= division;
        }
        ++division;
    }
    printf("\n");
}

int main(int argc, char* argv[]){
    int x = 0;
    scanf("%d", &x);
    printNumber(x);

    return 0;

}