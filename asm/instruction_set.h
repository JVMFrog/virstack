#pragma once


enum inst_set{
    mov,

    ld,
    ldh,
    ldb,

    str,
    strh,
    strb,

    add,
    sub,
    mul,
    div_inst,

    printi,

    cmp,
    cmpl,
    cmpb,
    jmp,
    not,

    exit_inst = 255
};


