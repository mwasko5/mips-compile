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


typedef enum { // mapped to their register number in mips
    r0,
    at,
    v0,
    v1,
    a0,
    a1,
    a2,
    a3,
    t0,
    t1,
    t2,
    t3,
    t4,
    t5,
    t6,
    t7,
    s0,
    s1,
    s2,
    s3,
    s4,
    s5,
    s6,
    s7,
    t8,
    t9,
    k0,
    k1,
    gp,
    sp,
    s8,
    ra
} mips_register;

#endif