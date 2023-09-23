section .data
    Holberton_prnt db "Hello, Holberton",10,0
    frmt_str_prntf: db "%s", 10, 0

    str_lent: equ $-Holberton_prnt
    
    section .text
    
    global main
    extern printf

main:
    push rbp
    mov rdi, Holberton_prnt
    mov rsi, frmt_str_prntf
    mov rdx, str_lent
    call printf
    pop rbp
    mov rax,0
    ret

