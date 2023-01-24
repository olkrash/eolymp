#import <stdio.h>

int returnFullCubes(int num){
    int t = 1;
    while (t * t * t <= num) {
        printf("%d ", t * t * t );
        ++t;
    }
}


int main(){
    printf("%d", returnFullCubes(9));
}