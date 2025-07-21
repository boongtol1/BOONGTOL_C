.global _start
.align 4

_start:
    mov     x0, #-3         // == ~2
    add     x0, x0, #1      // == -3 + 1 = -2

    // Exit syscall
    mov     x0, #0          // exit code
    mov     x16, #1         // syscall number 1 (exit)
    svc     #0x80           // make syscall
