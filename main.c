#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <malloc.h>

#include "parser.h"
#include "structs.h"

int main(void) {
    char* testline = "addi $t0, $t0, 10";
    char** testarr;
    testarr = parse_line(testline, LINE_SIZE);

    print_string_array(testarr, LINE_SIZE);
}



