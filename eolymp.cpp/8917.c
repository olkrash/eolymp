#import <stdio.h>

int powersOfTwo(int num){
    int t = 1;
    while (t <= num) {
        t *= 2;
        printf("%d ", t);
    }

}


int main(){
    printf("%d", powersOfTwo(7));

    return 0;
}