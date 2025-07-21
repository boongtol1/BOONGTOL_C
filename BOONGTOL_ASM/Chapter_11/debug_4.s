.extern _printf

.section __DATA,__data
ptfStr: .asciz "X%-2u = %32ld, 0x%016lx\n"
.align 4
message: .asciz "==> Debug complete!\n"
.align 4

.section __TEXT,__text
.global _start

.macro printReg reg
    stp X0, X1, [SP, #-16]!
    stp X2, X3, [SP, #-16]!
    mov X1, #\reg
    mov X2, X\reg
    mov X3, X\reg
    ldr X0, =ptfStr
    bl _printf
    ldp X2, X3, [SP], #16
    ldp X0, X1, [SP], #16
.endm

.macro printStr strLabel
    stp X0, X1, [SP, #-16]!
    ldr X0, =\strLabel
    bl _printf
    ldp X0, X1, [SP], #16
.endm

_start:
    mov X5, #12345
    printReg 5
    printStr message
    mov X0, #0
    mov X16, #0x2000001
    svc #0x80
