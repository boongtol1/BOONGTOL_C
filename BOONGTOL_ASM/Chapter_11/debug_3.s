//
// Apple Silicon (macOS) compatible Assembly for printf register debug
//

.extern _printf

// =====================
// DATA SECTION FIRST!
// =====================
.section __DATA,__data
ptfStr: .asciz "X%-2u = %32ld, 0x%016lx\n"
.align 4

message: .asciz "==> Debug complete!\n"
.align 4

// =====================
// TEXT SECTION
// =====================
.section __TEXT,__text
.global _start

// Macro: printReg
.macro  printReg reg
    stp     X0, X1, [SP, #-16]!
    stp     X2, X3, [SP, #-16]!
    stp     X4, X5, [SP, #-16]!
    stp     X6, X7, [SP, #-16]!
    stp     X8, X9, [SP, #-16]!
    stp     X10, X11, [SP, #-16]!
    stp     X12, X13, [SP, #-16]!
    stp     X14, X15, [SP, #-16]!
    stp     X16, X17, [SP, #-16]!
    stp     X18, LR, [SP, #-16]!

    mov     X1, #\reg
    mov     X2, X\reg
    mov     X3, X\reg
    ldr     X0, =ptfStr
    bl      _printf

    ldp     X18, LR, [SP], #16
    ldp     X16, X17, [SP], #16
    ldp     X14, X15, [SP], #16
    ldp     X12, X13, [SP], #16
    ldp     X10, X11, [SP], #16
    ldp     X8, X9, [SP], #16
    ldp     X6, X7, [SP], #16
    ldp     X4, X5, [SP], #16
    ldp     X2, X3, [SP], #16
    ldp     X0, X1, [SP], #16
.endm

// Macro: printStr
.macro  printStr strLabel
    stp     X0, X1, [SP, #-16]!
    stp     X2, X3, [SP, #-16]!
    stp     X4, X5, [SP, #-16]!
    stp     X6, X7, [SP, #-16]!
    stp     X8, X9, [SP, #-16]!
    stp     X10, X11, [SP, #-16]!
    stp     X12, X13, [SP, #-16]!
    stp     X14, X15, [SP, #-16]!
    stp     X16, X17, [SP, #-16]!
    stp     X18, LR, [SP, #-16]!

    ldr     X0, =\strLabel
    bl      _printf

    ldp     X18, LR, [SP], #16
    ldp     X16, X17, [SP], #16
    ldp     X14, X15, [SP], #16
    ldp     X12, X13, [SP], #16
    ldp     X10, X11, [SP], #16
    ldp     X8, X9, [SP], #16
    ldp     X6, X7, [SP], #16
    ldp     X4, X5, [SP], #16
    ldp     X2, X3, [SP], #16
    ldp     X0, X1, [SP], #16
.endm

// Entry point
_start:
    mov X5, #12345
    printReg 5

    printStr message

    // exit(0)
    mov     X0, #0
    mov     X16, #0x2000001
    svc     #0x80
