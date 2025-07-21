.extern _printf

.section __DATA,__data
ptfStr: .asciz "X%-2u = %32ld, 0x%016lx\n"
.align 4
message: .asciz "==> Debug complete!\n"
.align 4
myval: .quad 20240630
exit_syscall: .quad 0x2000001

.section __TEXT,__text
.global _start

.macro printReg reg
    stp X0, X1, [SP, #-16]!
    mov X1, #\reg
    mov X2, X\reg
    mov X3, X\reg
    adrp X0, ptfStr@PAGE
    add  X0, X0, ptfStr@PAGEOFF
    bl _printf
    ldp X0, X1, [SP], #16
.endm

.macro printStr strLabel
    stp X0, X1, [SP, #-16]!
    adrp X0, \strLabel@PAGE
    add  X0, X0, \strLabel@PAGEOFF
    bl _printf
    ldp X0, X1, [SP], #16
.endm

_start:
    adrp    X5, myval@PAGE
    ldr     X5, [X5, myval@PAGEOFF]
    printReg 5

    printStr message

    adrp    X16, exit_syscall@PAGE
    ldr     X16, [X16, exit_syscall@PAGEOFF]
    mov     X0, #0
    svc     #0x80
