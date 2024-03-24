#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>

#define LINE_SIZE 3

int opcode_index(char* opcode);

char** parse_line(char* line, int size);

void print_string_array(char** arr, int size);
