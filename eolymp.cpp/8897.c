#import <stdio.h>

int returnMultiple(int current){

        while(1) {
            ++current;
            if (current % 10 == 0) {
                return current;
            }
        };

}


int main(){
    printf("%d", returnMultiple(7));
}