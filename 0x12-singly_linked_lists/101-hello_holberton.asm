section .data
    Holberton_prnt db "Hello, Holberton",10,0

    str_lent: equ $-Holberton_prnt


frmt_str_prntf: db "%s", 0

section .text
    
    global main
    extern printf

main:
    push rdp
    push str_lent
    mov rdi, Holberton_prnt
    mov rsi, frmt_str_prntf
    call printf
    pop rdp
    pop str_lent
    ret

