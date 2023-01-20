

int main(){
#include <stdio.h>


    int main(){
        int n, a;
        scanf("%d", a);
        scanf("%d", n);

        int tmp = n;

        if (a == 0) {
            return 0;
        }
        for(int i = 1; i < a; ++i) {
            n*=tmp;
        }
        printf("%d", n);
    }
}