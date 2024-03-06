#include "binary.h"
#include "structs.h"

char* r_type_to_bits(mips_r_type instruction) {
    char *bits = malloc(sizeof(char) * 32);

    strcpy(bits, int_to_n_bits(instruction.opcode, 6));
    strcat(bits, int_to_n_bits(instruction.rs, 5));
    strcat(bits, int_to_n_bits(instruction.rt, 5));
    strcat(bits, int_to_n_bits(instruction.rd, 5));
    strcat(bits, int_to_n_bits(instruction.shamt, 5));
    strcat(bits, int_to_n_bits(instruction.funccode, 6));

    return bits; // need to free bits later
}

char* i_type_to_bits(mips_i_type instruction) {
    char *bits = malloc(sizeof(char) * 32);

    strcpy(bits, int_to_n_bits(instruction.opcode, 6));
    strcat(bits, int_to_n_bits(instruction.rs, 5));
    strcat(bits, int_to_n_bits(instruction.rt, 5));
    strcat(bits, int_to_n_bits(instruction.imm, 16));

    return bits; // need to free bits later
}

char* j_type_to_bits(mips_j_type instruction) {
    char *bits = malloc(sizeof(char) * 32);

    strcpy(bits, int_to_n_bits(instruction.opcode, 6));
    strcat(bits, int_to_n_bits(instruction.address, 26));

    return bits; // need to free bits later
}

char* int_to_n_bits(int input, int size) { // need to check for overflow
    char *bits = malloc(sizeof(char) * 8);
    int count = input;
    
    for(int i = 0; i < size; i++) {
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

/*
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
*/

void free_bits(char *bits) {
    free(bits);
}