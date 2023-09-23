section .data
    Holberton_prnt db "Hello, Holberton",10,0

    str_lent: equ $-Holberton_prnt

extern printf


section .text
    
    global main

main:
    push rdp
    mov rdi, Holberton_prnt
    mov rsi, str_lent
    call printf
    pop rdp
    ret

