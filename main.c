#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <malloc.h>

#include "parser.h"

#define LINE_SIZE 3

int main(void) {
    char* testline = "Hello Im Matt";
    char** testarr;
    testarr = parse_line(testline, LINE_SIZE);

    print_string_array(testarr, LINE_SIZE);
}


