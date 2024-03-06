#include "binary.h"

char* int_to_8bit(int input) {
    char *bits = malloc(sizeof(char) * 8);
    int count = input;
    
    for(int i = 0; i < 8; i++) {
        if((count % 2) == 1) {
            bits[i] = '1';
        }
        else {
            bits[i] = '0';
        }

        count = (count / 2);
    }

    return bits; // need to remember to free the bits after use
}

char* int_to_16bit(int input) {
    char *bits = malloc(sizeof(char) * 16);
    int count = input;
    
    for(int i = 0; i < 16; i++) {
        if((count % 2) == 1) {
            bits[i] = '1';
        }
        else {
            bits[i] = '0';
        }

        count = (count / 2);
    }

    return bits; // need to remember to free the bits after use
}

void free_bits(char *bits) {
    free(bits);
}