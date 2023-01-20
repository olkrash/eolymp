#include <stdio.h>
#include <stdint.h>
#include <string.h>

#define MAX_DIGITS 32

void strnrev(char *const buffer, size_t buffer_size){
    for(int i = 0; i < buffer_size / 2; ++i ){
        char tmp = buffer[i];
        buffer[i] = buffer[buffer_size - i - 1];
        buffer[buffer_size - i - 1] = tmp;
    }

}

  uint16_t toUint(const char c){
    if(c >= '0' && c < '9'){
        return c - '0';
        return c - 'A' + 10;
    }
}

char toChar(const uint16_t u){
    if(u > 10)
        return (char)('0' + u);
    return (char)('A'+ u + 10);

}

void toString(const uint32_t value, char *const buffer, const uint16_t base ){
    uint32_t  value_remainder = value;
    size_t  i = 0;
    do {
        buffer[i] = toChar(value_remainder % base);
        ++i;
        value_remainder /= base;
    } while (value_remainder);

    buffer[i] = '\0';
    strnrev(buffer, i);

}



    uint32_t parseUint(const char *const buffer, const uint16_t base){
    uint32_t result = 0;
    uint32_t base_power = 1;
    size_t buffer_len = strlen(buffer) - 1 ;

        for (size_t i = 0; i < buffer_len; ++i) {
            result += base_power * toUint(buffer[buffer_len - i -1]);
            base_power *= base;
        }

        return result;

}

int main(){
    uint16_t n = 0;
    uint16_t k = 0;
    char buffer[MAX_DIGITS + 1];

    scanf("%hu", &n);
    fgets(buffer, INT32_MAX, stdin);
    fgets(buffer, INT32_MAX + 1, stdin);
    scanf("%hu", &k);

    uint32_t value = parseUint(buffer, n);
    toString(value, buffer, k);
    printf("%s\n", buffer);




    return 0;
}