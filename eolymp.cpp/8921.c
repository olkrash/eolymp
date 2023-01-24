#import <stdio.h>

int returnAllDigits(int num){
    while(num > 0)
    {
        int mod = num % 10;
        printf("%d\n",mod);
        num /= 10;
    }

}


int main(){
    printf("%d", returnAllDigits(123));
}