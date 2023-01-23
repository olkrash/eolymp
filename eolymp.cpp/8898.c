#import <stdio.h>
#import <math.h>


int returnFullSquire(int num){
    if (num < 0) {
       return 0;

    }
    while(1) {
        ++num;
        int num2 = (int)sqrt(num);
        if (num2 * num2 == num) {
          return num;
        }
   };

}


int main(){
    printf("%d", returnFullSquire(7));
}