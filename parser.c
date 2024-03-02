#include "parser.h"

char** parse_line(char* line, int size) {
    char **array = malloc(sizeof(char*) * size);

    int index = 0;
    int arr_index = 0;
    while(line[index] != '\0') {
        char* tempstr = malloc(strlen(line) + 1); // Allocate memory for the substring
        int spot = 0;
        while(line[index] != ' ' && line[index] != '\0') { // Check for end of string as well
            tempstr[spot] = line[index];
            spot++;
            index++;
        }
        tempstr[spot] = '\0'; // Null-terminate the substring
        array[arr_index] = tempstr;
        arr_index++;
        if (line[index] == '\0') // Break the loop if end of string is reached
            break;
        index++;
    }
    return array;
}

void print_string_array(char** arr, int size) {
    for(int i = 0; i < size; i++) { // index the size of the array
        int index = 0;
        while(arr[i][index] != '\0') {
            printf("%c", arr[i][index]);
            index++;
        }

        if(i != (size - 1)) { // to prevent extra space at the end
            printf(" ");
        }
    }
}