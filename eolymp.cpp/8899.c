#import <stdio.h>


int returnFullSquire(int num) {
    if (num < 0) {
        return 0;
    }

    while (1) {
        ++num;
        if (num > 0 && (num & (num - 1)) == 0) {
            return num;
        };

    };

}


int main() {
    printf("%d", returnFullSquire(7));

    return 0;
}