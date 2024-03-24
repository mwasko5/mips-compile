#include "parser.h"
#include "structs.h"


int opcode_index(char* opcode) {
	for(int i = 0; i < NUM_INSTRUCTIONS_SUPPORTED; i++) {
		if(strcmp(instructions[i], opcode) == 0) {
			return i;
		}
	}
}

char** parse_line(char* line, int size) {
	char **array = malloc(sizeof(char*) * size);

	int index = 0;
	int arr_index = 0;
	while(line[index] != '\0') {
		char* tempstr = malloc(strlen(line) + 1); // space for string
		int spot = 0;
		while(line[index] != ' ' && line[index] != '\0') {
			if(line[index] != ',' && line[index] != ' ' && line[index] != '\r' && line[index] != '\n') {
				tempstr[spot] = line[index];
			}
			spot++;
			index++;
		}
		tempstr[spot] = '\0';
		array[arr_index] = tempstr;
		arr_index++;
		if(line[index] == '\0') {
			break;
		}
		index++;
	}
	return array;
}

void print_string_array(char** arr, int size) {
	for(int i = 0; i < size; i++) {
		int index = 0;
		while(arr[i][index] != '\0') {
			printf("%c ", arr[i][index]);
			index++;
		}

		if(i != (size - 1)) { // to prevent extra space at the end
			printf(" ");
		}
	}
}
