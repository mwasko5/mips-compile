#include <stdlib.h>
#include <stdio.h>
#include <malloc.h>

#include "structs.h"

char* int_to_n_bits(int input, int size);

void free_bits(char* bits);

char* r_type_to_bits(mips_r_type instruction);

char* i_type_to_bits(mips_i_type instruction);

char* j_type_to_bits(mips_j_type instruction);