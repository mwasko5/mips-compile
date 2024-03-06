#ifndef BINARY_H
#define BINARY_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <malloc.h>

#include "parser.h"
#include "structs.h"

char* r_type_to_bits(mips_r_type instruction);

char* int_to_n_bits(int input, int size);

char* int_to_8bit(int input);

char* int_to_16bit(int input);

#endif