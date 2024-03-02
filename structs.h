#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct mips_r_type_struct {
    int opcode; // 6 bits
    int rs; // integer value of the register number (5 bits)
    int rt; // 5 bits
    int rd; // 5 bits
    int shamt; // 5 bits
    int funccode; // 6 bits
} mips_r_type;

typedef struct mips_i_type_struct {
    int opcode; // 6 bits
    int rs; // 5 bits
    int rt; // 5 bits
    int imm; // immediate value (16 bits)
} mips_i_type;

typedef struct mips_j_type_struct {
    int opcode; // 6 bits
    int address; // 26 bits
} mips_j_type;


#endif