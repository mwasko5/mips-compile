#ifndef PARSER_H
#define PARSER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LINE_SIZE 3

char** parse_line(char* line, int size);

void print_string_array(char** arr, int size);

#endif