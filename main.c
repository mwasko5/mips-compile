#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "parser.h"
#include "structs.h"
#include "binary.h"

int main(void) {
	
	FILE *fpwrite;
	fpwrite = fopen("output.txt", "w");
	
	FILE *fpread;
	fpread = fopen("input.txt", "r");
	

	char line[50];

	if(fpread == NULL) {
		printf("File could not be opened\n");
	}

	while(fgets(line, 50, fpread) != NULL) {
		//fprintf(fpwrite, "%s\n", line);
		char** line_arr = parse_line(line, 4);

		int inst_index = 0;
		for(int i = 0; i < NUM_INSTRUCTIONS_SUPPORTED; i++) {
			if(strcmp(line_arr[0], instructions[i]) == 0) {
				inst_index = i;
			}
		}
		int inst_type = instruction_types[inst_index];
		
		if(inst_type == 0) { // R-TYPE
			mips_r_type RTYPE;


			int inst_rs = 0;
			int inst_rt = 0;
			int inst_rd = 0;
			
			for(int i = 0; i < 32; i++) {
				if(strcmp(line_arr[1], registers[i]) == 0) {
					inst_rs = i;
				}
			}
			for(int j = 0; j < 32; j++) {
				if(strcmp(line_arr[2], registers[j]) == 0) {
					inst_rt = j;
				}
			}
			for(int k = 0; k < 32; k++) {
				if(strcmp(line_arr[3], registers[k]) == 0) {
					inst_rd = k;
				}
			}

			printf("rs: %d\n", inst_rs);
			printf("rt: %d\n", inst_rt);
			printf("rd: %d\n", inst_rd);

			RTYPE = (mips_r_type){.opcode = 0, .rs = inst_rs, .rt = inst_rt, .rd = inst_rd, .shamt = 0, .funccode = 0};
			fprintf(fpwrite, "%s\n", r_type_to_bits(RTYPE));
		}
		else if(inst_type == 1) { // I-TYPE

		}
		else { // J-TYPE

		}
	}
	
	/*
	mips_r_type RTYPE;
	RTYPE = (mips_r_type){.opcode = 1, .rs = 1, .rt = 1, .rd = 1, .shamt = 1, .funccode = 1};
	
	fprintf(fp, "%s\n", r_type_to_bits(RTYPE));
	*/
	fclose(fpwrite);
	fclose(fpread);
	//printf("%s\n", r_type_to_bits(RTYPE));
	
	return 0;
}
